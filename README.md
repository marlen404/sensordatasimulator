# 🌡️ Virtual Sensor Data Simulator in C

A simple C program that simulates a virtual temperature sensor. Every **3 seconds**, it generates a random temperature value between **-20°C and 50°C**, writes the value to a log file, and optionally prints it to the console.

---

## 📦 How to Run

In the `src` directory:

```bash
gcc -o sensor sensor.c
./sensor
```
### 📂 optional
View generaded log file:
```bash
cat sensor_log.txt
```
## 🎛️ Features
✅ C program with a loop-based sensor simulation  
✅ Random number generation (simulated sensor values)  
✅ Time delay using sleep()  
✅ Writing data to a log file

## 📝 Optional Extensions
✨ Output log entries in JSON format
✨ Add timestamps to each sensor value
✨ Load settings via a simple configuration file (interval, min/max values, etc.)

## ⚙️ Embedded-Like Concepts
📌 Polling (periodic data collection)
📌 Logfile storage similar to data loggers
📌 Simulate real-time behavior
📌 Work with system resources (files, memory)
📌 Clearly defined, isolated task

## 📜 License
This project is licensed under the MIT License.