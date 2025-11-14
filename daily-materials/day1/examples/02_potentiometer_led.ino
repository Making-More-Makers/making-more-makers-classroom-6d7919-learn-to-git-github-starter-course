/*
 * Potentiometer LED Control
 * 电位器LED控制
 * 
 * This example demonstrates:
 * - Reading analog input with analogRead()
 * - Controlling LED brightness with PWM
 * - Serial communication for debugging
 * 
 * 本示例演示：
 * - 使用analogRead()读取模拟输入
 * - 使用PWM控制LED亮度
 * - 用于调试的串行通信
 * 
 * Circuit:
 * - Potentiometer connected to A0
 * - LED connected to pin 9 (PWM pin) with 220Ω resistor
 * 
 * 电路：
 * - 电位器连接到A0
 * - LED通过220Ω电阻连接到引脚9（PWM引脚）
 */

// Pin definitions - 引脚定义
const int POT_PIN = A0;      // Potentiometer input - 电位器输入
const int LED_PIN = 9;       // LED output (PWM) - LED输出（PWM）

// Variables - 变量
int potValue = 0;            // Value from potentiometer - 电位器的值
int brightness = 0;          // LED brightness - LED亮度

void setup() {
  // Initialize serial communication at 9600 baud
  // 以9600波特率初始化串行通信
  Serial.begin(9600);
  
  // Set LED pin as output
  // 将LED引脚设置为输出
  pinMode(LED_PIN, OUTPUT);
  
  Serial.println("Potentiometer LED Control Started");
  Serial.println("电位器LED控制已启动");
}

void loop() {
  // Read the potentiometer value (0-1023)
  // 读取电位器值（0-1023）
  potValue = analogRead(POT_PIN);
  
  // Map potentiometer value to LED brightness (0-255)
  // 将电位器值映射到LED亮度（0-255）
  brightness = map(potValue, 0, 1023, 0, 255);
  
  // Set LED brightness using PWM
  // 使用PWM设置LED亮度
  analogWrite(LED_PIN, brightness);
  
  // Print values to Serial Monitor for debugging
  // 将值打印到串口监视器以便调试
  Serial.print("Pot Value: ");
  Serial.print(potValue);
  Serial.print("\t Brightness: ");
  Serial.println(brightness);
  
  // Small delay to make serial output readable
  // 小延迟使串行输出可读
  delay(100);
}

/*
 * Try these modifications:
 * 尝试这些修改：
 * 
 * 1. Add a button to turn the LED on/off
 *    添加按钮以打开/关闭LED
 * 
 * 2. Add multiple LEDs that light up at different brightness levels
 *    添加多个LED在不同亮度级别点亮
 * 
 * 3. Create a "breathing" effect by automatically varying brightness
 *    通过自动改变亮度创建"呼吸"效果
 * 
 * 4. Add a second potentiometer to control blink speed
 *    添加第二个电位器来控制闪烁速度
 */

