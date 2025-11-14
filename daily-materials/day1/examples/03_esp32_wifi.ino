/*
 * ESP32 WiFi Connection Example
 * ESP32 WiFi连接示例
 * 
 * This example demonstrates:
 * - Connecting ESP32 to WiFi network
 * - Checking connection status
 * - Getting IP address
 * 
 * 本示例演示：
 * - 将ESP32连接到WiFi网络
 * - 检查连接状态
 * - 获取IP地址
 */

#include <WiFi.h>

// WiFi credentials - WiFi凭证
// IMPORTANT: Replace with your network credentials
// 重要：替换为你的网络凭证
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// LED pin for connection status
// 用于连接状态的LED引脚
const int LED_PIN = 2;  // Built-in LED on most ESP32 boards

void setup() {
  // Initialize serial communication
  // 初始化串行通信
  Serial.begin(115200);
  delay(1000);
  
  // Initialize LED pin
  // 初始化LED引脚
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  
  Serial.println();
  Serial.println("ESP32 WiFi Connection Example");
  Serial.println("ESP32 WiFi连接示例");
  Serial.println("=====================================");
  
  // Connect to WiFi
  // 连接到WiFi
  connectToWiFi();
}

void loop() {
  // Check if still connected
  // 检查是否仍然连接
  if (WiFi.status() == WL_CONNECTED) {
    // Blink LED to show connected
    // 闪烁LED表示已连接
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(900);
  } else {
    // Reconnect if connection lost
    // 如果连接丢失则重新连接
    Serial.println("Connection lost. Reconnecting...");
    Serial.println("连接丢失。重新连接...");
    connectToWiFi();
  }
}

void connectToWiFi() {
  Serial.print("Connecting to ");
  Serial.print("连接到 ");
  Serial.println(ssid);
  
  // Start WiFi connection
  // 启动WiFi连接
  WiFi.begin(ssid, password);
  
  // Wait for connection
  // 等待连接
  int attempts = 0;
  while (WiFi.status() != WL_CONNECTED && attempts < 20) {
    delay(500);
    Serial.print(".");
    digitalWrite(LED_PIN, !digitalRead(LED_PIN)); // Toggle LED
    attempts++;
  }
  
  if (WiFi.status() == WL_CONNECTED) {
    // Connection successful
    // 连接成功
    Serial.println();
    Serial.println("WiFi connected successfully!");
    Serial.println("WiFi连接成功！");
    Serial.println("=====================================");
    
    // Print connection details
    // 打印连接详情
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
    
    Serial.print("MAC Address: ");
    Serial.println(WiFi.macAddress());
    
    Serial.print("Signal Strength (RSSI): ");
    Serial.print(WiFi.RSSI());
    Serial.println(" dBm");
    
    Serial.println("=====================================");
    
    digitalWrite(LED_PIN, HIGH);
  } else {
    // Connection failed
    // 连接失败
    Serial.println();
    Serial.println("Failed to connect to WiFi");
    Serial.println("无法连接到WiFi");
    Serial.println("Please check your credentials and try again");
    Serial.println("请检查你的凭证并重试");
    digitalWrite(LED_PIN, LOW);
  }
}

/*
 * Try these modifications:
 * 尝试这些修改：
 * 
 * 1. Add a simple web server that displays "Hello World"
 *    添加一个显示"Hello World"的简单Web服务器
 * 
 * 2. Create a web page that shows sensor data
 *    创建一个显示传感器数据的网页
 * 
 * 3. Add WiFi configuration via Serial Monitor
 *    通过串口监视器添加WiFi配置
 * 
 * 4. Implement automatic reconnection with exponential backoff
 *    实现带指数退避的自动重新连接
 */

