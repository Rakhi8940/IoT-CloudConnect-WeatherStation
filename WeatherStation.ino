#include <WiFi.h>
#include "DHT.h"

#define DHTPIN 4          // DHT11 data pin connected to GPIO4
#define DHTTYPE DHT11     // DHT11 sensor type

DHT dht(DHTPIN, DHTTYPE);

// Replace with your WiFi credentials and ThingSpeak API key
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";
const char* server = "api.thingspeak.com";
const String apiKey = "YOUR_THINGSPEAK_API_KEY";

WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(100);

  dht.begin();
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Connected! ESP32 IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Read temperature and humidity
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reads failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT11 sensor!");
    delay(10000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Connect to ThingSpeak and send data
  if (client.connect(server, 80)) {
    String postStr = "api_key=" + apiKey;
    postStr += "&field1=" + String(temperature);
    postStr += "&field2=" + String(humidity);

    client.println("POST /update HTTP/1.1");
    client.println("Host: api.thingspeak.com");
    client.println("Connection: close");
    client.println("Content-Type: application/x-www-form-urlencoded");
    client.print("Content-Length: ");
    client.println(postStr.length());
    client.println();
    client.print(postStr);

    Serial.println("Data sent to ThingSpeak.");
  } else {
    Serial.println("Connection to ThingSpeak failed.");
  }

  client.stop();

  // Wait 20 seconds to comply with ThingSpeak rate limits
  delay(20000);
}
