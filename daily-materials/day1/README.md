# Day 1: Introduction to Maker Culture & Arduino Fundamentals
# 第1天：创客文化入门与Arduino基础

[English](#english) | [中文](#chinese)

---

<a name="english"></a>
## 📅 Schedule

**Morning Session**: 9:00 AM - 12:00 PM  
**Afternoon Session**: 1:30 PM - 5:00 PM

---

## 🎯 Learning Objectives

By the end of Day 1, students will be able to:

- Explain the principles and values of maker culture
- Set up and use the Arduino IDE
- Build basic circuits on a breadboard
- Write and upload Arduino sketches
- Use digital and analog I/O
- Interface with sensors and actuators
- Understand ESP32 capabilities and AI integration potential

---

## 📚 Morning Session (9:00 AM - 12:00 PM)

### 9:00 - 10:00: Welcome & Maker Culture Introduction

**Topics**:
- What is a maker?
- History of the maker movement
- The maker mindset: Iterate, Share, Collaborate
- Examples of impactful maker projects
- Tools and resources available to makers

**Discussion Questions**:
- What problems do you see in your daily life that could be solved with technology?
- Have you ever built something? What motivated you?
- What are you hoping to create in this course?

**Activity**: Watch selected maker project videos
- [Simone Giertz's Everyday Robots](https://www.youtube.com/watch?v=EXAMPLE)
- [Mark Rober's Squirrel Obstacle Course](https://www.youtube.com/watch?v=EXAMPLE)
- Local/community maker projects

---

### 10:00 - 10:30: Course Overview

**Topics**:
- 6-day course structure
- Daily schedule and expectations
- Deliverables timeline
- Introduction to GitHub Classroom
- How to submit assignments
- Where to get help

**Materials to Review**:
- [Course Syllabus](../../docs/syllabus.md)
- [Grading Rubric](../../docs/grading-rubric.md)
- [Project Guidelines](../../docs/project-guidelines.md)

---

### 10:30 - 10:45: Break ☕

---

### 10:45 - 11:30: Assessment & Team Formation

**Grading Rubric Review**:
- Assignment weights
- Evaluation criteria
- Expectations for documentation
- GitHub usage requirements

**Team Formation Activity**:
- Form teams of 3-4 students
- Ice breaker: "What do you want to make?"
- Share skills and interests
- Exchange contact information
- Create team name/identity

**Team Exercise**:
Each team discusses and shares:
1. One problem they want to solve
2. One skill each member brings
3. One thing they want to learn

---

### 11:30 - 12:00: Lab Safety & Materials Overview

**Lab Safety Guidelines**:
- Electrical safety basics
- Proper handling of components
- Power supply precautions
- Soldering safety (if applicable)
- Emergency procedures
- Lab rules and etiquette

**Materials Overview**:
- Arduino Uno boards
- ESP32 boards
- Breadboards and jumper wires
- Sensors available
- Actuators available
- Other components
- 3D printer access
- Tool checkout procedures

---

## 🔨 Afternoon Session (1:30 PM - 5:00 PM)

### 1:30 - 2:30: Arduino Basics

**Arduino IDE Setup**:
- Download and install Arduino IDE
- Connect Arduino to computer
- Select board and port
- Upload first sketch (Blink)

**Circuit Components**:
- Resistors and their color codes
- LEDs and polarity
- Buttons and pull-up/pull-down resistors
- Breadboard anatomy
- Power and ground

**Digital I/O**:
- pinMode() function
- digitalWrite() function
- digitalRead() function
- Using built-in LED
- External LED circuit

**Hands-on Exercise**: Build LED Blink Circuit
- Connect LED to pin 13
- Use 220Ω resistor
- Upload Blink sketch
- Modify blink rate
- Add second LED

**Code Example**: See `examples/01_blink_led/`

---

### 2:30 - 3:30: Sensors and Actuators

**Analog Input**:
- analogRead() function
- Understanding analog values (0-1023)
- Potentiometer basics
- Voltage dividers

**Serial Communication**:
- Serial.begin()
- Serial.print() and Serial.println()
- Serial Monitor usage
- Debugging with serial

**Actuators**:
- Controlling LED brightness with PWM
- analogWrite() function
- Servo motor basics
- Using the Servo library

**Hands-on Exercise**: Interactive Sensor Project
- Read potentiometer value
- Control LED brightness
- Display values in Serial Monitor
- Add button for mode switching
- (Optional) Control servo position

**Code Example**: See `examples/02_potentiometer_led/`

---

### 3:30 - 3:45: Break ☕

---

### 3:45 - 5:00: ESP32 & AI Introduction

**ESP32 Overview**:
- ESP32 vs Arduino comparison
- ESP32 capabilities:
  - WiFi connectivity
  - Bluetooth support
  - More processing power
  - More memory
  - Touch sensors
  - Multiple ADCs

**Setting up ESP32**:
- Install ESP32 board support in Arduino IDE
- Select correct board (ESP32 Dev Module)
- Install drivers (if needed)
- Upload first ESP32 sketch

**WiFi Basics**:
- Connecting to WiFi network
- Checking connection status
- Getting IP address
- Simple web server example

**AI on Edge Devices**:
- What is TinyML?
- Machine learning on microcontrollers
- Use cases:
  - Voice recognition
  - Gesture detection
  - Anomaly detection
  - Image classification
- Edge Impulse overview

**Demo**: ESP32 with ML Model
- Pre-trained model demonstration
- Sensor data classification
- Real-time inference

**Hands-on Exercise**: Upload First ESP32 Sketch
- Connect ESP32 to computer
- Upload WiFi connection sketch
- Verify connection in Serial Monitor
- Modify and test

**Code Example**: See `examples/03_esp32_wifi/`

---

## 📝 Homework

### Assignment 1: Arduino Basics

**Due**: End of Day 1 (by 11:59 PM)

**Task**: Create a simple interactive Arduino project

**Requirements**:
1. Use at least 1 sensor (button, potentiometer, or sensor from lab)
2. Use at least 1 actuator (LED, buzzer, or servo)
3. Implement meaningful interaction between input and output
4. Document your project in GitHub repository

**Deliverables**:
- Arduino sketch (.ino file)
- Circuit diagram or Fritzing file
- README.md with:
  - Project description
  - Components used
  - Circuit diagram/photo
  - How to use
  - Challenges faced
- Photos of physical circuit

**Submission**: Push to GitHub Classroom repository

**Evaluation**: See [Assignment 1 Rubric](../../assignments/assignment1-arduino-basics/rubric.md)

---

## 📚 Resources

### Arduino Documentation
- [Arduino Language Reference](https://www.arduino.cc/reference/en/)
- [Arduino Built-in Examples](https://www.arduino.cc/en/Tutorial/BuiltInExamples)
- [Arduino Forum](https://forum.arduino.cc/)

### ESP32 Resources
- [ESP32 Arduino Core Documentation](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
- [Random Nerd Tutorials - ESP32](https://randomnerdtutorials.com/getting-started-with-esp32/)

### AI/ML Resources
- [Edge Impulse Documentation](https://docs.edgeimpulse.com/)
- [TensorFlow Lite for Microcontrollers](https://www.tensorflow.org/lite/microcontrollers)

### Video Tutorials
- [Arduino Basics Playlist](https://www.youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP)
- [ESP32 Getting Started](https://www.youtube.com/watch?v=xPlN_Tk3VLQ)

---

## 💡 Tips for Success

1. **Don't be afraid to experiment** - You won't break the Arduino!
2. **Read error messages carefully** - They often tell you exactly what's wrong
3. **Check your connections** - Most problems are loose wires
4. **Use the Serial Monitor** - Great for debugging
5. **Comment your code** - Future you will thank you
6. **Save often and commit to Git** - Version control is your friend
7. **Ask questions** - Use GitHub Issues or ask instructors

---

## 🎯 Success Criteria

By the end of Day 1, you should be able to:

- ✅ Set up Arduino development environment
- ✅ Build basic circuits on breadboard
- ✅ Upload and modify Arduino sketches
- ✅ Use digital and analog I/O
- ✅ Read sensors and control actuators
- ✅ Set up ESP32 and connect to WiFi
- ✅ Understand potential of AI on embedded devices
- ✅ Complete Assignment 1

---

<a name="chinese"></a>
## 📅 时间表

**上午时段**: 9:00 - 12:00  
**下午时段**: 1:30 - 5:00

---

## 🎯 学习目标

第1天结束时，学生将能够：

- 解释创客文化的原则和价值观
- 设置和使用Arduino IDE
- 在面包板上构建基本电路
- 编写和上传Arduino程序
- 使用数字和模拟I/O
- 连接传感器和执行器
- 了解ESP32功能和AI集成潜力

---

## 📚 上午时段（9:00 - 12:00）

### 9:00 - 10:00: 欢迎与创客文化介绍

**主题**：
- 什么是创客？
- 创客运动的历史
- 创客思维：迭代、分享、协作
- 有影响力的创客项目案例
- 创客可用的工具和资源

**讨论问题**：
- 你在日常生活中看到哪些可以用技术解决的问题？
- 你曾经制作过什么东西吗？是什么激励了你？
- 你希望在本课程中创造什么？

**活动**：观看精选的创客项目视频
- Simone Giertz的日常机器人
- Mark Rober的松鼠障碍赛
- 本地/社区创客项目

---

### 10:00 - 10:30: 课程概览

**主题**：
- 6天课程结构
- 每日时间表和期望
- 交付物时间线
- GitHub Classroom介绍
- 如何提交作业
- 在哪里获得帮助

**要审查的材料**：
- [课程大纲](../../docs/syllabus.md)
- [评分标准](../../docs/grading-rubric.md)
- [项目指南](../../docs/project-guidelines.md)

---

### 10:30 - 10:45: 休息 ☕

---

### 10:45 - 11:30: 评估与团队组建

**评分标准审查**：
- 作业权重
- 评估标准
- 文档期望
- GitHub使用要求

**团队组建活动**：
- 组建3-4名学生的团队
- 破冰活动："你想制造什么？"
- 分享技能和兴趣
- 交换联系信息
- 创建团队名称/身份

**团队练习**：
每个团队讨论并分享：
1. 他们想解决的一个问题
2. 每个成员带来的一项技能
3. 他们想学习的一件事

---

### 11:30 - 12:00: 实验室安全与材料概览

**实验室安全指南**：
- 电气安全基础
- 元件的正确处理
- 电源供应注意事项
- 焊接安全（如适用）
- 紧急程序
- 实验室规则和礼仪

**材料概览**：
- Arduino Uno开发板
- ESP32开发板
- 面包板和跳线
- 可用传感器
- 可用执行器
- 其他元件
- 3D打印机访问
- 工具借出程序

---

## 🔨 下午时段（1:30 - 5:00）

### 1:30 - 2:30: Arduino基础

**Arduino IDE设置**：
- 下载并安装Arduino IDE
- 将Arduino连接到计算机
- 选择开发板和端口
- 上传第一个程序（Blink）

**电路元件**：
- 电阻及其色环代码
- LED和极性
- 按钮和上拉/下拉电阻
- 面包板结构
- 电源和地线

**数字I/O**：
- pinMode()函数
- digitalWrite()函数
- digitalRead()函数
- 使用内置LED
- 外部LED电路

**动手练习**：构建LED闪烁电路
- 将LED连接到引脚13
- 使用220Ω电阻
- 上传Blink程序
- 修改闪烁速率
- 添加第二个LED

**代码示例**：见 `examples/01_blink_led/`

---

### 2:30 - 3:30: 传感器和执行器

**模拟输入**：
- analogRead()函数
- 理解模拟值（0-1023）
- 电位器基础
- 电压分压器

**串行通信**：
- Serial.begin()
- Serial.print()和Serial.println()
- 串口监视器使用
- 使用串行调试

**执行器**：
- 使用PWM控制LED亮度
- analogWrite()函数
- 舵机基础
- 使用Servo库

**动手练习**：交互式传感器项目
- 读取电位器值
- 控制LED亮度
- 在串口监视器中显示值
- 添加按钮进行模式切换
- （可选）控制舵机位置

**代码示例**：见 `examples/02_potentiometer_led/`

---

### 3:30 - 3:45: 休息 ☕

---

### 3:45 - 5:00: ESP32与AI入门

**ESP32概览**：
- ESP32与Arduino比较
- ESP32功能：
  - WiFi连接
  - 蓝牙支持
  - 更强处理能力
  - 更多内存
  - 触摸传感器
  - 多个ADC

**设置ESP32**：
- 在Arduino IDE中安装ESP32开发板支持
- 选择正确的开发板（ESP32 Dev Module）
- 安装驱动程序（如需要）
- 上传第一个ESP32程序

**WiFi基础**：
- 连接到WiFi网络
- 检查连接状态
- 获取IP地址
- 简单Web服务器示例

**边缘设备上的AI**：
- 什么是TinyML？
- 微控制器上的机器学习
- 用例：
  - 语音识别
  - 手势检测
  - 异常检测
  - 图像分类
- Edge Impulse概览

**演示**：带ML模型的ESP32
- 预训练模型演示
- 传感器数据分类
- 实时推理

**动手练习**：上传第一个ESP32程序
- 将ESP32连接到计算机
- 上传WiFi连接程序
- 在串口监视器中验证连接
- 修改和测试

**代码示例**：见 `examples/03_esp32_wifi/`

---

## 📝 作业

### 作业1：Arduino基础

**截止时间**：第1天结束（晚上11:59之前）

**任务**：创建一个简单的交互式Arduino项目

**要求**：
1. 使用至少1个传感器（按钮、电位器或实验室的传感器）
2. 使用至少1个执行器（LED、蜂鸣器或舵机）
3. 实现输入和输出之间的有意义交互
4. 在GitHub仓库中记录你的项目

**交付物**：
- Arduino程序（.ino文件）
- 电路图或Fritzing文件
- README.md包含：
  - 项目描述
  - 使用的元件
  - 电路图/照片
  - 如何使用
  - 面临的挑战
- 物理电路的照片

**提交**：推送到GitHub Classroom仓库

**评估**：见[作业1评分标准](../../assignments/assignment1-arduino-basics/rubric.md)

---

## 📚 资源

### Arduino文档
- [Arduino语言参考](https://www.arduino.cc/reference/en/)
- [Arduino内置示例](https://www.arduino.cc/en/Tutorial/BuiltInExamples)
- [Arduino论坛](https://forum.arduino.cc/)

### ESP32资源
- [ESP32 Arduino核心文档](https://docs.espressif.com/projects/arduino-esp32/en/latest/)
- [Random Nerd Tutorials - ESP32](https://randomnerdtutorials.com/getting-started-with-esp32/)

### AI/ML资源
- [Edge Impulse文档](https://docs.edgeimpulse.com/)
- [TensorFlow Lite for Microcontrollers](https://www.tensorflow.org/lite/microcontrollers)

### 视频教程
- [Arduino基础播放列表](https://www.youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP)
- [ESP32入门](https://www.youtube.com/watch?v=xPlN_Tk3VLQ)

---

## 💡 成功秘诀

1. **不要害怕实验** - 你不会弄坏Arduino！
2. **仔细阅读错误消息** - 它们通常会告诉你确切的问题
3. **检查你的连接** - 大多数问题是松动的线
4. **使用串口监视器** - 非常适合调试
5. **注释你的代码** - 未来的你会感谢你
6. **经常保存并提交到Git** - 版本控制是你的朋友
7. **提出问题** - 使用GitHub Issues或询问教师

---

## 🎯 成功标准

第1天结束时，你应该能够：

- ✅ 设置Arduino开发环境
- ✅ 在面包板上构建基本电路
- ✅ 上传和修改Arduino程序
- ✅ 使用数字和模拟I/O
- ✅ 读取传感器和控制执行器
- ✅ 设置ESP32并连接到WiFi
- ✅ 了解嵌入式设备上AI的潜力
- ✅ 完成作业1

---

**Let's start making!** 🚀  
**让我们开始创造！** 🚀

