# 🚀 Vacuum Cleaner Robot  

### 🤖 Smart Cleaning with Obstacle Avoidance  

![Robot Icon](https://img.icons8.com/external-flat-icons-pause-08/64/000000/external-robot-automation-flat-icons-pause-08.png)

---

## 🌟 Project Overview  
This **Autonomous Vacuum Cleaner Robot** is designed to navigate around obstacles and clean dust and small debris using a **built-in fan**. The robot moves intelligently using an **ultrasonic sensor** and a **servo motor** to detect obstacles and determine the best path.

---

## 🔥 Features  
✔️ **Obstacle Avoidance** – Uses an ultrasonic sensor for smart navigation  
✔️ **Vacuum Functionality** – A fan sucks in dust and small debris  
✔️ **Motorized Movement** – Controlled via an H-Bridge motor driver  
✔️ **Autonomous Operation** – No manual control required  

---

## 🛠️ Components Used  
| Component          | Description                     |
|-------------------|--------------------------------|
| 🎯 **Arduino**    | Microcontroller for logic     |
| 📡 **HC-SR04**   | Ultrasonic sensor for detection |
| 🔄 **Servo Motor** | Rotates the ultrasonic sensor |
| ⚡ **DC Motors**  | Moves the robot                |
| 🔥 **Fan**        | Sucks in dust and debris      |
| 🔌 **H-Bridge**  | Controls motor movement        |

---

## 🏗️ How It Works  
1️⃣ The robot moves **forward** until an obstacle is detected.  
2️⃣ It **stops** and checks the **left side** using the servo-mounted ultrasonic sensor.  
3️⃣ If **left is clear**, it moves **backward**, turns **left**, and resumes.  
4️⃣ If **left is blocked**, it checks the **right side**.  
5️⃣ If **right is clear**, it moves **backward**, turns **right**, and resumes.  
6️⃣ If **both sides are blocked**, it **moves further backward and rotates more** before finding a clear path.  
7️⃣ The **fan runs continuously** to vacuum dust and small particles.  

---

## 🚀 Installation & Setup  
1️⃣ **Clone the Repository:**  
 git clone <your-repo-url>
cd vacuum-cleaner-robot🚀 Installation & Setup
🛠️ Clone the Repository
bash
Copy
Edit
git clone <your-repo-url>
cd vacuum-cleaner-robot

---

⚡ Upload Code to Arduino
1️⃣ Open the Arduino IDE
2️⃣ Select the correct board & port
3️⃣ Upload the code


---


##🔋 Power Up & Run
🔹 Connect the power source
🔹 Watch it clean & avoid obstacles! 🎉


---


##🔮 Future Enhancements
🔹 Increase Fan Power – Improve dust collection efficiency.
🔹 Add Smart Mapping – Optimize movement to clean systematically.
🔹 Improve Battery Life – Extend runtime.
🔹 Wi-Fi / Bluetooth Control – Add remote control option.


---


##🤝 Contribute
🛠️ Want to improve this project? Feel free to contribute!
📩 Contact me at [your-email@example.com]

---

##🌟 Show Your Support
⭐ Star this repository if you found it useful!
💬 Share your feedback in the issues section!
       ```bash
