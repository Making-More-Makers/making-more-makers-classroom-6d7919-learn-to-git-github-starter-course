/*
 * Blink LED Example
 * LED闪烁示例
 * 
 * This example demonstrates the basics of Arduino programming:
 * - digitalWrite() to turn LED on/off
 * - delay() to control timing
 * 
 * 本示例演示Arduino编程基础：
 * - digitalWrite()打开/关闭LED
 * - delay()控制时间
 * 
 * Circuit: LED connected to pin 13 with 220Ω resistor
 * 电路：LED通过220Ω电阻连接到引脚13
 */

// Define LED pin - 定义LED引脚
const int LED_PIN = 13;

void setup() {
  // Initialize digital pin as an output
  // 将数字引脚初始化为输出
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  // 打开LED（HIGH是电压电平）
  digitalWrite(LED_PIN, HIGH);
  
  // Wait for 1 second (1000 milliseconds)
  // 等待1秒（1000毫秒）
  delay(1000);
  
  // Turn the LED off by making the voltage LOW
  // 通过将电压设置为LOW关闭LED
  digitalWrite(LED_PIN, LOW);
  
  // Wait for 1 second
  // 等待1秒
  delay(1000);
}

/*
 * Try these modifications:
 * 尝试这些修改：
 * 
 * 1. Change the delay values to make it blink faster or slower
 *    更改延迟值使其闪烁更快或更慢
 * 
 * 2. Add a second LED on a different pin
 *    在不同引脚上添加第二个LED
 * 
 * 3. Make the LEDs blink in alternating pattern
 *    使LED以交替模式闪烁
 * 
 * 4. Create an SOS pattern (... --- ...)
 *    创建SOS模式（... --- ...）
 */

