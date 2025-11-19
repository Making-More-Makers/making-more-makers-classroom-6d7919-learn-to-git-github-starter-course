# Level 2: Sensor to Actuator Explanation
# 第2关：传感器到执行器说明

## Project Description | 项目描述

This project demonstrates a simple button-controlled LED system.

这个项目演示了一个简单的按钮控制LED系统。

---

## Hardware Used | 使用的硬件

- Arduino Uno
- Button (tactile switch)
- LED
- 220Ω resistor (for LED)
- Jumper wires

---

## Wiring | 接线

**Button**:
- One side → Pin 2
- Other side → GND

**LED**:
- Anode (long leg) → Pin 13
- Cathode (short leg) → GND (through 220Ω resistor)

---

## Logic Explanation | 逻辑说明

The program uses a simple if-else structure:

程序使用简单的if-else结构：

1. Read button state (HIGH or LOW)
   读取按钮状态（高电平或低电平）

2. If button is pressed (LOW):
   如果按钮被按下（低电平）：
   - Turn LED ON
   - 点亮LED

3. If button is not pressed (HIGH):
   如果按钮未被按下（高电平）：
   - Turn LED OFF
   - 熄灭LED

---

## Code Highlights | 代码亮点

- Using `INPUT_PULLUP` to avoid floating pin
  使用`INPUT_PULLUP`避免引脚悬空

- Simple and reliable control logic
  简单可靠的控制逻辑

- No delay needed - responds immediately
  不需要延迟 - 立即响应

---

## What I Learned | 我学到了什么

- How to read digital input from a button
  如何从按钮读取数字输入

- How to control an output based on input
  如何根据输入控制输出

- The importance of pull-up resistors
  上拉电阻的重要性

---

## Possible Improvements | 可能的改进

- Add LED brightness control (PWM)
  添加LED亮度控制（PWM）

- Use debouncing for more stable button reading
  使用去抖动实现更稳定的按钮读取

- Add multiple LEDs with different patterns
  添加多个LED实现不同模式

