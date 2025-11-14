# Day 1 Exercises | 第1天练习

[English](#english) | [中文](#chinese)

---

<a name="english"></a>
## 🏋️ Practice Exercises

Complete these exercises to reinforce your Day 1 learning. Work individually or with your team.

---

### Exercise 1: Traffic Light System

**Difficulty**: Beginner  
**Time**: 20 minutes

**Objective**: Create a simple traffic light controller

**Requirements**:
- Use 3 LEDs (red, yellow, green)
- Implement traffic light sequence:
  - Green: 5 seconds
  - Yellow: 2 seconds
  - Red: 5 seconds
  - Repeat

**Components**:
- Arduino Uno
- 3 LEDs (red, yellow, green)
- 3x 220Ω resistors
- Breadboard and jumper wires

**Hints**:
- Define pin numbers as constants
- Use digitalWrite() and delay()
- Create a function for each light state

---

### Exercise 2: Button Controlled LED

**Difficulty**: Beginner  
**Time**: 15 minutes

**Objective**: Control an LED with a button press

**Requirements**:
- LED turns ON when button is pressed
- LED turns OFF when button is released
- Use proper pull-up or pull-down resistor

**Components**:
- Arduino Uno
- 1 LED
- 1 push button
- 1x 220Ω resistor (for LED)
- 1x 10kΩ resistor (for button)
- Breadboard and jumper wires

**Hints**:
- Use digitalRead() to read button state
- Check Arduino pull-up resistor feature (INPUT_PULLUP)
- Debounce is not required for this exercise

---

### Exercise 3: LED Brightness Control

**Difficulty**: Intermediate  
**Time**: 25 minutes

**Objective**: Control LED brightness with a potentiometer

**Requirements**:
- Potentiometer controls LED brightness smoothly
- Display brightness percentage in Serial Monitor
- Use PWM capable pin for LED

**Components**:
- Arduino Uno
- 1 LED
- 1 potentiometer (10kΩ)
- 1x 220Ω resistor
- Breadboard and jumper wires

**Hints**:
- Use analogRead() for potentiometer
- Use map() function to convert ranges
- Use analogWrite() for PWM

**Bonus Challenge**:
- Add a second LED that has inverse brightness

---

### Exercise 4: Button Toggle

**Difficulty**: Intermediate  
**Time**: 30 minutes

**Objective**: Toggle LED on/off with each button press

**Requirements**:
- First press: LED turns ON
- Second press: LED turns OFF
- Third press: LED turns ON again
- Implement proper debouncing

**Components**:
- Arduino Uno
- 1 LED
- 1 push button
- 1x 220Ω resistor
- 1x 10kΩ resistor
- Breadboard and jumper wires

**Hints**:
- Use a boolean variable to track state
- Detect button state change (not just pressed)
- Add small delay for debouncing (10-50ms)

---

### Exercise 5: Servo Control

**Difficulty**: Intermediate  
**Time**: 25 minutes

**Objective**: Control servo motor position with potentiometer

**Requirements**:
- Potentiometer controls servo angle (0-180°)
- Display angle in Serial Monitor
- Smooth servo movement

**Components**:
- Arduino Uno
- 1 servo motor
- 1 potentiometer (10kΩ)
- Breadboard and jumper wires

**Hints**:
- Include Servo.h library
- Use map() to convert potentiometer value to angle
- servo.write() to set position

**Code Template**:
```cpp
#include <Servo.h>

Servo myServo;
const int SERVO_PIN = 9;
const int POT_PIN = A0;

void setup() {
  myServo.attach(SERVO_PIN);
  Serial.begin(9600);
}

void loop() {
  // Your code here
}
```

---

### Exercise 6: Multi-Mode System

**Difficulty**: Advanced  
**Time**: 45 minutes

**Objective**: Create a system with multiple operating modes

**Requirements**:
- Button cycles through 3 modes
- Mode 1: LED blinks slowly (1 second on/off)
- Mode 2: LED blinks quickly (200ms on/off)
- Mode 3: LED fades in and out
- Display current mode in Serial Monitor

**Components**:
- Arduino Uno
- 1 LED (on PWM pin)
- 1 push button
- 1x 220Ω resistor
- 1x 10kΩ resistor
- Breadboard and jumper wires

**Hints**:
- Use a variable to track current mode
- Use switch-case or if-else for different behaviors
- Use millis() instead of delay() for better responsiveness

---

### Exercise 7: ESP32 WiFi Scanner

**Difficulty**: Intermediate  
**Time**: 20 minutes

**Objective**: Scan and display available WiFi networks

**Requirements**:
- Scan for WiFi networks
- Display network names (SSID)
- Display signal strength
- Show number of networks found

**Components**:
- ESP32 board
- USB cable

**Hints**:
- Use WiFi.scanNetworks()
- Use WiFi.SSID(i) and WiFi.RSSI(i)
- No actual connection needed

**Code Template**:
```cpp
#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop() {
  // Scan and display networks
  // Add delay between scans
}
```

---

## 🎯 Challenge Projects

For those who finish early:

### Challenge 1: Simon Says Game
Create a simplified Simon Says game using 4 LEDs and 4 buttons. The Arduino creates a random sequence, displays it with LEDs, and player must repeat it with buttons.

### Challenge 2: Mood Light
Create a mood light that cycles through different colors using RGB LED. Add a potentiometer to control transition speed.

### Challenge 3: ESP32 Web Server
Create a web server that displays a button. When clicked, it toggles an LED on the ESP32.

---

<a name="chinese"></a>
## 🏋️ 练习题

完成这些练习以巩固你的第1天学习。可以单独完成或与团队一起完成。

---

### 练习1：交通灯系统

**难度**：初级  
**时间**：20分钟

**目标**：创建一个简单的交通灯控制器

**要求**：
- 使用3个LED（红、黄、绿）
- 实现交通灯序列：
  - 绿灯：5秒
  - 黄灯：2秒
  - 红灯：5秒
  - 重复

**元件**：
- Arduino Uno
- 3个LED（红、黄、绿）
- 3个220Ω电阻
- 面包板和跳线

**提示**：
- 将引脚号定义为常量
- 使用digitalWrite()和delay()
- 为每个灯状态创建函数

---

### 练习2：按钮控制LED

**难度**：初级  
**时间**：15分钟

**目标**：用按钮按压控制LED

**要求**：
- 按下按钮时LED亮起
- 释放按钮时LED熄灭
- 使用适当的上拉或下拉电阻

**元件**：
- Arduino Uno
- 1个LED
- 1个按钮
- 1个220Ω电阻（用于LED）
- 1个10kΩ电阻（用于按钮）
- 面包板和跳线

**提示**：
- 使用digitalRead()读取按钮状态
- 检查Arduino内部上拉电阻功能（INPUT_PULLUP）
- 此练习不需要去抖动

---

### 练习3：LED亮度控制

**难度**：中级  
**时间**：25分钟

**目标**：使用电位器控制LED亮度

**要求**：
- 电位器平滑控制LED亮度
- 在串口监视器中显示亮度百分比
- 为LED使用PWM功能引脚

**元件**：
- Arduino Uno
- 1个LED
- 1个电位器（10kΩ）
- 1个220Ω电阻
- 面包板和跳线

**提示**：
- 使用analogRead()读取电位器
- 使用map()函数转换范围
- 使用analogWrite()实现PWM

**额外挑战**：
- 添加第二个LED，其亮度与第一个相反

---

### 练习4：按钮切换

**难度**：中级  
**时间**：30分钟

**目标**：每次按下按钮切换LED开/关

**要求**：
- 第一次按：LED亮起
- 第二次按：LED熄灭
- 第三次按：LED再次亮起
- 实现适当的去抖动

**元件**：
- Arduino Uno
- 1个LED
- 1个按钮
- 1个220Ω电阻
- 1个10kΩ电阻
- 面包板和跳线

**提示**：
- 使用布尔变量跟踪状态
- 检测按钮状态变化（不仅仅是按下）
- 添加小延迟进行去抖动（10-50ms）

---

### 练习5：舵机控制

**难度**：中级  
**时间**：25分钟

**目标**：使用电位器控制舵机位置

**要求**：
- 电位器控制舵机角度（0-180°）
- 在串口监视器中显示角度
- 舵机平滑移动

**元件**：
- Arduino Uno
- 1个舵机
- 1个电位器（10kΩ）
- 面包板和跳线

**提示**：
- 包含Servo.h库
- 使用map()将电位器值转换为角度
- servo.write()设置位置

**代码模板**：
```cpp
#include <Servo.h>

Servo myServo;
const int SERVO_PIN = 9;
const int POT_PIN = A0;

void setup() {
  myServo.attach(SERVO_PIN);
  Serial.begin(9600);
}

void loop() {
  // 你的代码在这里
}
```

---

### 练习6：多模式系统

**难度**：高级  
**时间**：45分钟

**目标**：创建具有多种操作模式的系统

**要求**：
- 按钮循环切换3种模式
- 模式1：LED慢速闪烁（1秒开/关）
- 模式2：LED快速闪烁（200ms开/关）
- 模式3：LED淡入淡出
- 在串口监视器中显示当前模式

**元件**：
- Arduino Uno
- 1个LED（在PWM引脚上）
- 1个按钮
- 1个220Ω电阻
- 1个10kΩ电阻
- 面包板和跳线

**提示**：
- 使用变量跟踪当前模式
- 使用switch-case或if-else实现不同行为
- 使用millis()而不是delay()以获得更好的响应性

---

### 练习7：ESP32 WiFi扫描器

**难度**：中级  
**时间**：20分钟

**目标**：扫描并显示可用的WiFi网络

**要求**：
- 扫描WiFi网络
- 显示网络名称（SSID）
- 显示信号强度
- 显示找到的网络数量

**元件**：
- ESP32开发板
- USB线

**提示**：
- 使用WiFi.scanNetworks()
- 使用WiFi.SSID(i)和WiFi.RSSI(i)
- 不需要实际连接

**代码模板**：
```cpp
#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop() {
  // 扫描并显示网络
  // 在扫描之间添加延迟
}
```

---

## 🎯 挑战项目

对于提前完成的人：

### 挑战1：西蒙说游戏
使用4个LED和4个按钮创建一个简化的西蒙说游戏。Arduino创建随机序列，用LED显示，玩家必须用按钮重复。

### 挑战2：情绪灯
使用RGB LED创建一个循环切换不同颜色的情绪灯。添加电位器控制过渡速度。

### 挑战3：ESP32 Web服务器
创建一个显示按钮的Web服务器。点击时，它切换ESP32上的LED。

---

**Practice makes perfect!** 💪  
**熟能生巧！** 💪

