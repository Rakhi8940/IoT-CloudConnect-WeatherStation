<p align="center">
  <img src="assets/banner.png" width="900" alt="IoT-CloudConnect-WeatherStation Banner" style="margin: 10px; border-radius: 16px;">
</p>

# ☁️ IoT-CloudConnect-WeatherStation

A next-generation, cloud-powered weather station built with ESP32, DHT11 sensor, and ThingSpeak IoT!  
Monitor temperature and humidity in real time, log and visualize your data on the cloud, and gain insights from anywhere. Perfect for smart home builders, students, hobbyists, and IoT learners.

---

## 🎯 Objective

- Build a smart weather station that measures **temperature** and **humidity**
- Log sensor data to the **cloud (ThingSpeak)** for real-time access and historical analytics
- Visualize and analyze trends using interactive dashboards
- Easily customize, expand, and deploy in any environment

---

## 📦 What You Need

| Component         | Quantity |
|-------------------|----------|
| **ESP32 Board**   | 1        |
| **DHT11 Sensor**  | 1        |
| **Jumper Wires**  | as needed|
| **USB Cable**     | 1        |
| **Breadboard**    | 1 (optional)|

---

## 🛠️ Circuit Diagram

```
[ESP32] ---- [DHT11]
   3V3  ----   VCC
   GND  ----   GND
   GPIO 4 ---- DATA
```
*Connect DHT11 DATA pin to GPIO 4 of ESP32 (or change in the code as needed).*

---

## 🌐 System Architecture

<p align="center">
  <img src="https://github.com/user-attachments/assets/f3f09aa7-e9a0-4351-bf70-00721d0a906d" width="650" alt="System Architecture" style="margin: 8px; border-radius: 10px;">
</p>

---

## 🚀 Project Workflow

1. **Wiring & Hardware Setup**
   - Assemble ESP32 and DHT11 as per circuit diagram
2. **Arduino Code**
   - Install dependencies:  
     `DHT sensor library` (Adafruit), `Adafruit Unified Sensor`
   - Update WiFi credentials and ThingSpeak API key in the code
   - Upload code to ESP32 via Arduino IDE
3. **ThingSpeak Cloud**
   - Create account and channel, copy Write API Key and Channel ID
   - Integrate into code for live cloud logging
4. **Data Analytics**
   - View real-time graphs and historical trends on ThingSpeak dashboard
5. **Customization**
   - Tweak reading interval, add more sensors, or build your own dashboard!

---

## ☁️ Setting Up ThingSpeak

1. [Sign up for ThingSpeak](https://thingspeak.com)
2. Create a new channel for your weather data
3. Copy your **Write API Key** and **Channel ID**
4. Paste your API key into the Arduino sketch

---

## 📊 Example Output

### **Live Dashboard**

<p align="center">
  <img src="https://github.com/user-attachments/assets/790db23b-0b25-4f49-9ca3-329b3a2a1b68" width="550" alt="ThingSpeak Dashboard" style="margin: 8px; border-radius: 8px;">
</p>

### **Sample Data Graphs**

<p align="center">
  <img src="https://github.com/user-attachments/assets/d591c988-26c3-46db-8c8d-6a9380144f97" width="380" alt="Temperature Graph" style="margin: 8px; border-radius: 8px;">
  <img src="https://github.com/user-attachments/assets/8c7023b5-8f1b-4bd8-99e9-aa3d359aa4c5" width="380" alt="Humidity Graph" style="margin: 8px; border-radius: 8px;">
</p>

---

## 📁 Project Structure

```
IoT-CloudConnect-WeatherStation/
├── assets/
│   ├── banner.png
│   ├── ...
├── data/
│   └── [optional: CSV logs]
├── WeatherStation.ino
├── README.md
└── ...
```

---

## 🧠 How It Works

- **ESP32** reads temperature and humidity from **DHT11** at set intervals
- Sends data via WiFi to **ThingSpeak Cloud**
- ThingSpeak stores and displays your data with graphs, statistics, and analytics

---

## 🛠️ Technologies Used

| Tool / Library      | Purpose                                       |
|---------------------|-----------------------------------------------|
| Arduino IDE         | Programming ESP32                             |
| ESP32               | Wireless microcontroller                       |
| DHT11               | Temperature & humidity sensing                |
| ThingSpeak          | Cloud data logging & visualization            |
| Adafruit DHT Library| Sensor interfacing                            |
| WiFi                | ESP32 built-in for cloud connectivity         |
| Python (optional)   | Data analytics, dashboard, automation         |

---

## 🖼️ Project Gallery

| Hardware Setup Example | ThingSpeak Dashboard |
|-----------------------|---------------------|
| <img src="https://github.com/user-attachments/assets/3cefa5c2-803a-4242-93f4-1fb8ea63ba4c" width="350" alt="Hardware Setup" style="margin: 8px; border-radius: 8px;"> | <img src="https://github.com/user-attachments/assets/790db23b-0b25-4f49-9ca3-329b3a2a1b68" width="350" alt="ThingSpeak Dashboard" style="margin: 8px; border-radius: 8px;"> |

---

## 📚 Resources

- [ESP32 Documentation](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/)
- [DHT11 Sensor Guide](https://learn.adafruit.com/dht/overview)
- [ThingSpeak Getting Started](https://thingspeak.com/pages/learn_more)
- [Arduino IDE Download](https://www.arduino.cc/en/software)

---

## 💡 Future Enhancements

- 📈 Add more sensors: rainfall, pressure, air quality
- 📱 Build a mobile/web dashboard for real-time alerts
- ☁️ Integrate with platforms like Blynk, Home Assistant, or Google Sheets
- 🧠 Apply AI/ML for weather prediction or anomaly detection

---

## 📝 License

MIT License

---

## 🤝 Contributing

Pull requests are welcome! For major changes, please open an issue first to discuss your ideas.

---

## 👩‍💻 Author

Made with ❤️ by **Rakhi Yadav**

---

*Ready to turn your space into a smart station? Start building with IoT-CloudConnect-WeatherStation today!*
