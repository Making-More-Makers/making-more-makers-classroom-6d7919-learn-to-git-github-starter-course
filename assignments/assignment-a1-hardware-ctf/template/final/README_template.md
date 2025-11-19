# Project Title: Smart Plant Monitor
# 项目标题：智能植物监测器

> Replace this with your project name
> 替换为你的项目名称

---

## Inspiration

Why did you build this project? What problem does it solve?

你为什么做这个项目？它解决什么问题？

**Example**:  
I always forget to water my plants, and they often die from dehydration. I wanted to create a simple system that reminds me when the soil is too dry.

**示例**：  
我总是忘记给植物浇水，它们经常因脱水而死亡。我想创建一个简单的系统，在土壤太干时提醒我。

---

## What it does

Describe the main functionality in 2-3 sentences.

用2-3句话描述主要功能。

**Example**:  
This device monitors soil moisture levels using a moisture sensor. When the soil becomes too dry, it lights up a red LED and displays a warning message on an LCD screen. It also shows the current moisture level as a percentage.

**示例**：  
这个设备使用湿度传感器监测土壤湿度。当土壤太干时，它会点亮红色LED并在LCD屏幕上显示警告信息。它还会以百分比形式显示当前湿度水平。

---

## How we built it

List the hardware and software you used, and explain the main logic.

列出你使用的硬件和软件，并解释主要逻辑。

**Hardware**:
- Arduino Uno
- Soil Moisture Sensor (Gravity)
- Red LED
- LCD1602 Display
- 220Ω resistor
- Jumper wires
- Breadboard

**Software**:
- Arduino IDE
- LiquidCrystal library

**Main Logic**:
1. Read analog value from moisture sensor (0-1023)
2. Convert to percentage (0-100%)
3. If moisture < 30%: Turn on LED, display warning
4. If moisture >= 30%: Turn off LED, display normal status
5. Update display every 2 seconds

---

## Challenges we ran into

What problems did you face? How did you solve them?

你遇到了什么问题？如何解决的？

**Example**:
- **Challenge 1**: Sensor readings were unstable and jumping around
  - **Solution**: Added averaging over 10 readings to smooth the data
  
- **Challenge 2**: LCD was not displaying correctly
  - **Solution**: Found correct pin connections in documentation and fixed wiring

**示例**：
- **挑战1**：传感器读数不稳定，跳来跳去
  - **解决方案**：添加了10次读数的平均值来平滑数据

- **挑战2**：LCD显示不正确
  - **解决方案**：在文档中找到了正确的引脚连接并修正了接线

---

## Accomplishments that we're proud of

What are you proud of accomplishing?

你为完成什么而自豪？

**Example**:
- This is my first complete Arduino project!
- I learned how to use an LCD display, which was completely new to me
- The system actually works and solves a real problem in my life
- I successfully debugged complex hardware issues

**示例**：
- 这是我第一个完整的Arduino项目！
- 我学会了使用LCD显示屏，这对我来说是全新的
- 系统真的能工作，解决了我生活中的真实问题
- 我成功调试了复杂的硬件问题

---

## What we learned

What new skills or knowledge did you gain?

你获得了什么新技能或知识？

**Example**:
- How to read analog sensors and convert values
- How to use the LiquidCrystal library for LCD displays
- How to use if-else logic for control systems
- How to debug hardware connections
- How to write documentation for hardware projects
- How to use Git and GitHub for version control

**示例**：
- 如何读取模拟传感器并转换数值
- 如何使用LiquidCrystal库控制LCD显示屏
- 如何使用if-else逻辑构建控制系统
- 如何调试硬件连接
- 如何为硬件项目编写文档
- 如何使用Git和GitHub进行版本控制

---

## What's next for your project

How could you improve or extend this project?

你可以如何改进或扩展这个项目？

**Example**:
- Add a buzzer for audio alerts
- Connect to WiFi using ESP32 to send notifications to my phone
- Add temperature and humidity sensors for complete environment monitoring
- Design a 3D-printed waterproof enclosure
- Add solar panel and battery for outdoor use
- Create a mobile app to view data remotely

**示例**：
- 添加蜂鸣器实现声音警报
- 使用ESP32连接WiFi，向我的手机发送通知
- 添加温度和湿度传感器实现完整的环境监测
- 设计3D打印的防水外壳
- 添加太阳能板和电池用于户外使用
- 创建移动应用远程查看数据

---

## Bill of Materials (BOM)

List all components used in your project.

列出项目中使用的所有组件。

| Component | Quantity | Source |
|-----------|----------|--------|
| Arduino Uno | 1 | DFRobot Beginner Kit |
| Soil Moisture Sensor | 1 | Gravity 37-in-1 Kit |
| Red LED | 1 | DFRobot Beginner Kit |
| LCD1602 Display | 1 | Gravity 37-in-1 Kit |
| 220Ω Resistor | 1 | DFRobot Beginner Kit |
| Jumper Wires | 10+ | DFRobot Beginner Kit |
| Breadboard | 1 | DFRobot Beginner Kit |
| USB Cable | 1 | DFRobot Beginner Kit |

---

## Wiring Diagram

Upload a clear photo or diagram of your wiring.

上传清晰的接线照片或图示。

![Wiring Diagram](wiring.jpg)

_Image: Connection diagram showing Arduino, sensors, and actuators_

_图片：显示Arduino、传感器和执行器的连接图_

---

## Demo Video

Link to your demo video (10-30 seconds).

链接到你的演示视频（10-30秒）。

**Video**: [Watch on Bilibili](https://bilibili.com/video/xxxxx)

_OR upload directly:_

![Demo](demo_video.mp4)

---

## Code Repository

Link to your GitHub repository with full code.

链接到包含完整代码的GitHub仓库。

**GitHub**: [https://github.com/username/assignment-a1-hardware-ctf](https://github.com/username/assignment-a1-hardware-ctf)

**Main Code File**: [code.ino](code.ino)

---

## Acknowledgments

Credit any resources, people, or projects that helped you.

感谢帮助过你的资源、人员或项目。

**Example**:
- Thanks to the Arduino community for excellent documentation
- Code inspired by [this Hackster project](https://hackster.io/xxx)
- Thanks to classmate John for helping debug the LCD issue

**示例**：
- 感谢Arduino社区提供的优秀文档
- 代码灵感来自[这个Hackster项目](https://hackster.io/xxx)
- 感谢同学John帮助调试LCD问题

---

## License

MIT License (or choose your preferred license)

---

**Built with ❤️ by [Your Name]**

**[Your Name] 用❤️制作**

---

_This project was created as part of the Making More Makers course._

_此项目是Making More Makers课程的一部分。_

