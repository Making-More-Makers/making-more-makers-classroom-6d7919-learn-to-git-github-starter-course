/*
 * Template Arduino Sketch for Assignment 1
 * 作业1的Arduino程序模板
 * 
 * Replace this header with your project information
 * 用你的项目信息替换此标题
 * 
 * Project: [Your Project Name]
 * Author: [Your Name]
 * Date: [Date]
 * Description: [Brief description of what this does]
 */

// ============================================
// PIN DEFINITIONS
// Define all pin numbers as constants at the top
// 在顶部将所有引脚号定义为常量
// ============================================

const int INPUT_PIN = 2;      // Example: button or sensor
const int OUTPUT_PIN = 13;    // Example: LED

// ============================================
// GLOBAL VARIABLES
// Define variables that need to be accessed across functions
// 定义需要在函数间访问的变量
// ============================================

int sensorValue = 0;          // Store sensor reading
bool ledState = false;        // Track LED state

// ============================================
// SETUP - Runs once when Arduino starts
// 设置 - Arduino启动时运行一次
// ============================================

void setup() {
  // Initialize serial communication
  // 初始化串行通信
  Serial.begin(9600);
  
  // Set pin modes
  // 设置引脚模式
  pinMode(INPUT_PIN, INPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
  
  // Print startup message
  // 打印启动消息
  Serial.println("Project Starting...");
  Serial.println("==================");
}

// ============================================
// LOOP - Runs repeatedly
// 循环 - 重复运行
// ============================================

void loop() {
  // Read input
  // 读取输入
  sensorValue = analogRead(INPUT_PIN);
  
  // Process input and control output
  // 处理输入并控制输出
  // ADD YOUR LOGIC HERE
  // 在这里添加你的逻辑
  
  // Example: Map sensor value to output
  // 示例：将传感器值映射到输出
  int outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(OUTPUT_PIN, outputValue);
  
  // Debug output
  // 调试输出
  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" | Output: ");
  Serial.println(outputValue);
  
  // Small delay to prevent overwhelming serial output
  // 小延迟以防止串行输出过载
  delay(100);
}

// ============================================
// HELPER FUNCTIONS
// Add any additional functions here
// 在此添加任何其他函数
// ============================================

// Example helper function
// 示例辅助函数
void blinkLED(int pin, int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(100);
  }
}

