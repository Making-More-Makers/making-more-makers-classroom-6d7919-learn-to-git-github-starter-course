# Sensor Test: Light Sensor
# 传感器测试：光敏传感器

**Module**: Gravity: Analog Light Sensor  
**模块**: Gravity：模拟光敏传感器

---

## Hardware Used | 使用的硬件

- Arduino Uno
- Gravity: Analog Light Sensor
- Jumper Wires (3x)

---

## Wiring | 接线

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC (Red)  | 5V          |
| GND (Black)| GND         |
| Signal (Yellow) | A0     |

---

## Code | 代码

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(A0);
  Serial.print("Light Level: ");
  Serial.println(lightValue);
  delay(500);
}
```

---

## Test Result | 测试结果

✅ **Working!** 

- Dark environment: 50-200
- Normal light: 300-600
- Bright light: 700-1000

The sensor responds correctly to light changes.

传感器正确响应光线变化。

---

## Photo | 照片

_[Optional: Add wiring photo here]_
_[可选：在此添加接线照片]_

---

## Notes | 备注

- Sensor is very sensitive to light changes
- Values are stable with 500ms delay
- Can be used for automatic lighting control

传感器对光线变化非常敏感
使用500ms延迟时数值稳定
可用于自动照明控制

