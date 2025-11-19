# Day 1 Afternoon: Instructor Execution Guide
# 第1天下午：教师执行指南

**总时长**: 270分钟（4.5小时，13:00-17:30）  
**核心目标**: Git实操、Arduino入门、硬件CTF闯关、项目发布

---

## 📋 课前准备清单（提前30分钟）

### 硬件环境
- [ ] 每组硬件已按清单分发（Arduino Kit + Gravity 37 Sensors）
- [ ] 所有Arduino板能正常连接USB
- [ ] 备用ESP32/Xiao板已准备（至少3块）
- [ ] 跳线、面包板、USB线充足
- [ ] 充电器/电源适配器准备好

### 软件环境
- [ ] Arduino IDE已在演示电脑安装
- [ ] CH340驱动已准备（U盘备份）
- [ ] GitHub Classroom链接已测试
- [ ] Assignment A0（上午作业）可见
- [ ] Assignment A1（Hardware CTF）已创建

### 网络环境
- [ ] GitHub访问正常
- [ ] Hackster.io访问方案准备（VPN或替代方案）
- [ ] OSChina（造物社区）访问正常
- [ ] Bilibili视频上传已测试

### 投影与演示
- [ ] PPT已打开并测试
- [ ] Arduino IDE演示窗口准备好
- [ ] GitHub Desktop或命令行演示准备
- [ ] 示例项目视频准备好

### 个人准备
- [ ] 水杯在手边
- [ ] 助教/技术支持人员到位
- [ ] 应急预案文档在手边
- [ ] 深呼吸，准备开始 😊

---

## ⏱️ 逐分钟教学流程

---

## 环节1：Git & GitHub Classroom 实操训练（30分钟）
**时间**: 13:00 - 13:30  
**目标**: 学生掌握基本Git工作流，成功提交上午的Assignment A0

### Part A: Git是什么？（5分钟）13:00-13:05

#### 🎤 讲师开场话术

> "下午好！上午我们完成了破冰、挑战、理解了Maker文化。
> 
> 现在我们要进入真正的'创客工作流'——
> 
> 用全世界创客都在用的工具：**Git 和 GitHub**。"

**[投影切换到 Slide 1: What is Git?]**

> "Git 是什么？
> 
> 简单说，Git 是**时间机器**。
> 
> 它让你可以：
> - 保存每一个版本的代码
> - 回到任何一个历史时刻
> - 多人协作不会互相覆盖
> - 记录你的成长轨迹
> 
> GitHub 是什么？
> 
> GitHub 是**全世界最大的代码分享平台**。
> 
> 所有开源项目、所有创客作品、所有AI模型，都在这里。
> 
> **今天，你会把你的第一个创客作品放到 GitHub 上。**"

---

### Part B: Git核心概念（5分钟）13:05-13:10

**[投影切换到 Slide 2: Git Workflow]**

#### 🎤 讲师讲解

> "Git 的工作流程只有4步：
> 
> **1. Clone（克隆）** - 把项目下载到你电脑
> 
> **2. Edit（编辑）** - 修改你的文件
> 
> **3. Commit（提交）** - 保存这个版本
> 
> **4. Push（推送）** - 上传到 GitHub
> 
> 就这么简单。"

**[投影显示图示]**

```
Your Computer               GitHub
     |                         |
     | 1. git clone            |
     |<------------------------|
     |                         |
     | 2. edit files           |
     |                         |
     | 3. git commit           |
     |                         |
     | 4. git push             |
     |------------------------>|
```

> "现在我演示一遍，然后你们自己做一次。"

---

### Part C: 现场演示（5分钟）13:10-13:15

#### 📺 讲师演示步骤

**Step 1: 打开 GitHub Classroom**

> "打开你上午加入的 GitHub Classroom。
> 
> 你会看到 **Assignment A0 - Day 1 Introduction**。
> 
> 点击进入你的仓库。"

**[屏幕分享：讲师操作]**

**Step 2: 获取仓库地址**

> "点击绿色按钮 **Code**，
> 
> 复制 HTTPS 链接。"

**Step 3: Clone仓库**

**方法1：使用 GitHub Desktop（推荐初学者）**

> "打开 GitHub Desktop。
> 
> 点击 File → Clone Repository。
> 
> 粘贴链接，选择保存位置，点击 Clone。"

**方法2：使用命令行（给有经验的学生看）**

```bash
git clone https://github.com/classroom/assignment-a0-yourname
cd assignment-a0-yourname
```

**Step 4: 编辑文件**

> "打开仓库文件夹。
> 
> 用任何文本编辑器（记事本、VS Code、Cursor）打开：
> - `my-maker-profile.md`
> - `challenge-reflection.md`
> 
> 填写上午你写在纸上的内容。"

**Step 5: Commit更改**

**GitHub Desktop方式：**

> "保存文件后，回到 GitHub Desktop。
> 
> 你会看到左边显示了你的更改。
> 
> 在左下角 Summary 填写：`Complete Day 1 introduction`
> 
> 点击 **Commit to main**。"

**命令行方式：**

```bash
git add .
git commit -m "Complete Day 1 introduction"
```

**Step 6: Push到GitHub**

> "点击右上角 **Push origin**。
> 
> 现在你的作品已经在 GitHub 上了！"

**命令行方式：**

```bash
git push origin main
```

**Step 7: 验证**

> "回到浏览器，刷新你的仓库页面。
> 
> 你会看到你的文件已经更新了。
> 
> 恭喜！你完成了第一次 Git 提交！"

---

### Part D: 学生实操（15分钟）13:15-13:30

#### 📝 学生任务清单

**学生需要完成**：
1. ✅ Clone他们的Assignment A0仓库
2. ✅ 编辑 `my-maker-profile.md`
3. ✅ 编辑 `challenge-reflection.md`
4. ✅ Commit更改
5. ✅ Push到GitHub
6. ✅ 在浏览器验证提交成功

#### 🎤 讲师在这15分钟做什么

**巡场指导**：
- 走动查看每个学生的进度
- 帮助卡住的学生
- 鼓励完成的学生

**常见问题快速解答**：

**问题1：找不到Clone按钮**
> "点击你仓库页面的绿色 **Code** 按钮，会弹出链接。"

**问题2：GitHub Desktop找不到仓库**
> "检查你是否登录了正确的GitHub账号。右上角 File → Options → Accounts。"

**问题3：Commit按钮是灰色的**
> "这说明你还没有修改任何文件，或者文件还没保存。先保存文件。"

**问题4：Push失败**
> "可能是网络问题。试试手机热点，或者稍后再push。"

**问题5：我不会Markdown**
> "没关系！Markdown很简单，就像写文本一样。`#`是标题，`-`是列表。"

#### 🎯 成功标志

**15分钟结束时，至少80%学生应该**：
- [ ] 成功Clone了仓库
- [ ] 编辑了至少一个文件
- [ ] 完成了Commit和Push
- [ ] 能在GitHub上看到自己的更改

**对于还没完成的学生**：
> "没关系！今天晚上回去继续完成。现在我们先进入硬件部分，稍后你可以继续Git。"

---

### Part E: 收尾与预告（1分钟）13:30

#### 🎤 讲师话术

> "非常好！你们刚才完成的，是全世界开发者每天都在做的事情。
> 
> Git 是你的工具，GitHub 是你的舞台。
> 
> 接下来，我们要用同样的方式，提交你们的硬件作品。
> 
> 现在，让我们进入激动人心的部分：**让机器动起来**！"

---

## 环节2：Arduino & ESP32 入门（20分钟）
**时间**: 13:30 - 13:50  
**目标**: 学生能独立上传代码到Arduino板，点亮第一个LED

### Part A: Arduino简介（3分钟）13:30-13:33

#### 🎤 讲师话术

**[投影切换到 Slide 3: What is Arduino?]**

> "Arduino 是什么？
> 
> Arduino 是**全世界最流行的开源硬件平台**。
> 
> 它让不会电子工程的人，也能做出智能硬件。
> 
> 今天在场的每一个人，都能用 Arduino 做出作品。"

**[投影展示Arduino板照片]**

> "这是 Arduino Uno（举起实物）。
> 
> 它有：
> - 数字引脚（Digital Pins）- 控制开关类的东西（LED、按钮）
> - 模拟引脚（Analog Pins）- 读取连续变化的值（光、声音、温度）
> - 电源引脚（Power）- 给传感器供电
> 
> 就这么简单。"

---

### Part B: 安装Arduino IDE（5分钟）13:33-13:38

#### 📺 讲师演示

**[投影屏幕分享]**

> "现在我演示如何设置Arduino IDE。"

**Step 1: 打开Arduino IDE**

> "如果你还没安装，现在去 arduino.cc 下载。
> 
> 已经安装的同学，直接打开Arduino IDE。"

**Step 2: 连接Arduino板**

> "用USB线连接Arduino到电脑。
> 
> 你应该看到板子上的小灯亮起来。"

**Step 3: 选择开发板**

> "在Arduino IDE中：
> 
> 点击 **Tools（工具）** → **Board（开发板）** → **Arduino Uno**
> 
> （如果你用的是其他板子，选择对应的型号）"

**Step 4: 选择端口**

> "点击 **Tools（工具）** → **Port（端口）**
> 
> 选择显示 Arduino 的那个端口。
> 
> Windows通常是 COM3 或 COM4
> 
> Mac通常是 /dev/cu.usbserial-xxx"

**Step 5: 测试连接**

> "如果端口列表是空的，说明驱动没装好。
> 
> 助教会帮你安装 CH340 驱动。"

#### 🚨 常见问题

**问题1：找不到端口**
- 检查USB线是否插好
- 尝试换一个USB口
- 安装CH340/CH341驱动
- 重启Arduino IDE

**问题2：端口显示"拒绝访问"（Linux/Mac）**
- 需要添加用户权限
- 助教现场处理

**问题3：板子选错了**
- 如果上传失败，检查是否选对了板子型号

---

### Part C: 第一个程序 - Blink（10分钟）13:38-13:48

#### 🎤 讲师讲解

**[投影切换到 Slide 4: First Program - Blink]**

> "现在我们来写第一个程序：让LED闪烁。
> 
> 这是所有硬件工程师的'Hello World'。"

**Step 1: 打开示例代码**

> "在Arduino IDE中：
> 
> 点击 **File（文件）** → **Examples（示例）** → **01.Basics** → **Blink**"

**Step 2: 代码讲解（2分钟）**

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```

> "这个代码很简单：
> 
> **setup()** - 只运行一次，用来初始化
> 
> **loop()** - 不断重复运行，这是主程序
> 
> **pinMode()** - 设置引脚为输出模式
> 
> **digitalWrite()** - 让引脚输出高电平（HIGH）或低电平（LOW）
> 
> **delay()** - 等待（单位是毫秒，1000毫秒=1秒）
> 
> 所以这个程序就是：
> 1. 点亮LED
> 2. 等1秒
> 3. 熄灭LED
> 4. 等1秒
> 5. 重复"

**Step 3: 上传代码**

> "点击左上角的 **→（上传）** 按钮。
> 
> 你会看到：
> - 'Compiling sketch...'（编译中）
> - 'Uploading...'（上传中）
> - 'Done uploading'（上传完成）
> 
> 现在看你的Arduino板，LED应该在闪烁！"

**[等待学生操作]**

> "如果你看到LED在闪烁，大声说'成功了'！"

**[鼓掌庆祝第一批成功的学生]**

---

### Part D: 学生实操（5分钟）13:43-13:48

#### 📝 学生任务

**每个学生需要**：
1. ✅ 连接Arduino板
2. ✅ 选择正确的板子和端口
3. ✅ 上传Blink程序
4. ✅ 看到LED闪烁

#### 🎤 讲师在这5分钟做什么

**巡场帮助**：
- 快速识别卡住的学生
- 优先帮助完全没反应的（驱动问题）
- 让成功的学生尝试修改delay时间

**鼓励性话术**：
> "太棒了！你已经是硬件工程师了！"
> 
> "这是你的第一个程序，拍张照片纪念一下！"
> 
> "试试把delay改成500，看看会怎样？"

#### 🎯 成功标志

**5分钟结束时**：
- [ ] 至少70%学生成功上传了Blink
- [ ] 所有学生的Arduino IDE能识别板子
- [ ] 技术问题都已被记录（课后处理）

---

### Part E: 硬件介绍（2分钟）13:48-13:50

#### 🎤 讲师话术

**[投影切换到 Slide 5: Hardware Kits]**

> "现在你们手边有两套硬件：
> 
> **1. DFRobot Arduino Beginner Kit**
> - Arduino Uno 板
> - LED、按钮、蜂鸣器
> - 面包板、跳线
> 
> **2. Gravity 37-in-1 Sensor Kit**
> - 37种传感器和执行器
> - 光敏、声音、温度、红外...
> - 全部即插即用
> 
> 接下来的3小时，你会用这些做出你的第一个智能硬件作品。
> 
> 准备好了吗？"

---

## 环节3：硬件CTF闯关（Level 1-4）（160分钟）
**时间**: 13:50 - 16:30  
**目标**: 学生通过4个关卡，最终完成一个Mini Project

### 关卡总览

| 关卡 | 时长 | 任务 | 产出 |
|------|------|------|------|
| Level 1 | 40min | 测试6个传感器+6个执行器 | 12个测试文档 |
| Level 2 | 30min | 1传感器→1执行器联动 | 1个联动程序 |
| Level 3 | 40min | 3传感器→3执行器系统 | 系统程序+接线图 |
| Level 4 | 50min | Mini Project创作 | 完整作品 |

---

### Level 1: 传感器与执行器测试（40分钟）13:50-14:30

#### Part A: 关卡介绍（5分钟）13:50-13:55

#### 🎤 讲师话术

**[投影切换到 Slide 6: Hardware CTF - Level 1]**

> "现在开始进入硬件 CTF！
> 
> CTF 是 Capture The Flag（夺旗）的意思。
> 
> 在黑客世界里，CTF 是最酷的学习方式。
> 
> 今天我们用 CTF 的方式学硬件。
> 
> **Level 1的任务**：
> 
> 从37个模块中，任选：
> - **6个传感器**（读取信息的）
> - **6个执行器**（执行动作的）
> 
> 每个模块，写一个简单的测试程序，证明它能工作。
> 
> 你有**35分钟**。"

#### 📊 PPT内容

```
Level 1: Sensor & Actuator Test
━━━━━━━━━━━━━━━━━━━━━━━━

任务：
✓ 选择6个传感器
✓ 选择6个执行器
✓ 每个写一个测试程序
✓ 记录测试结果

传感器示例：
- 光敏传感器（Light）
- 声音传感器（Sound）
- 温度传感器（Temperature）
- 按钮（Button）
- 红外传感器（IR）
- 倾斜传感器（Tilt）

执行器示例：
- LED灯
- 蜂鸣器（Buzzer）
- 小风扇（Fan）
- LCD显示屏
- 振动马达（Vibration Motor）
- 七段数码管（7-Segment Display）

提交：
/level1/sensors/*.md (6个文件)
/level1/actuators/*.md (6个文件)

⏰ 时间：35分钟
━━━━━━━━━━━━━━━━━━━━━━━━
```

#### 📝 示例文档格式

**给学生看一个示例**：

```markdown
# Light Sensor Test

## Hardware Used
- Arduino Uno
- Gravity: Analog Light Sensor
- Jumper Wires

## Wiring
- VCC → 5V
- GND → GND
- Signal → A0

## Code
```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(A0);
  Serial.println(lightValue);
  delay(500);
}
```

## Result
✅ Works! Light value changes from 50 (dark) to 900 (bright)

## Photo
(optional: 放一张接线照片)
```

---

#### Part B: 学生实操（35分钟）13:55-14:30

#### 🎤 讲师引导

> "现在开始！
> 
> 记住几个原则：
> 
> **1. 不要怕试错** - 烧不坏的（除非你把5V接到GND）
> 
> **2. 先简单后复杂** - 从LED和按钮开始
> 
> **3. 善用Serial Monitor** - 这是你的调试神器
> 
> **4. 互相帮助** - 旁边的同学可能知道答案
> 
> **5. 有问题举手** - 助教会来帮你
> 
> 开始！"

#### 🛠️ 讲师在这35分钟的工作

**巡场指导**：
- 每5分钟巡场一次
- 重点关注完全没动手的学生
- 帮助解决接线问题

**技术支持优先级**：
1. **高优先级**：完全不会接线的学生
2. **中优先级**：代码有bug的学生
3. **低优先级**：想做得更好的学生

**鼓励性话术**：
> "很好！你已经测试了3个，继续加油！"
> 
> "传感器不工作？检查一下接线，尤其是VCC和GND。"
> 
> "完成6个就够了，不用做所有37个。"

#### 🚨 常见问题处理

**问题1：传感器没反应**
- 检查接线（VCC、GND、Signal）
- 检查引脚号是否对应
- 换一个传感器试试（可能损坏）

**问题2：Serial Monitor没输出**
- 检查波特率（9600）
- 检查是否调用了Serial.begin()
- 检查USB线连接

**问题3：不知道选什么传感器**
- 推荐从这些开始：按钮、LED、光敏、蜂鸣器
- 这些最简单，容易成功

**问题4：时间不够**
- 可以只测试4-5个，质量比数量重要
- 或者简化文档，只写核心信息

#### 🎯 Level 1成功标志

**35分钟结束时**：
- [ ] 至少50%学生完成了6个传感器+6个执行器测试
- [ ] 所有学生至少测试了3-4个模块
- [ ] 学生理解了Arduino的基本接线和代码结构

---

### Level 2: 传感器→执行器联动（30分钟）14:30-15:00

#### Part A: 关卡介绍（5分钟）14:30-14:35

#### 🎤 讲师话术

**[投影切换到 Slide 7: Level 2 - Sensor to Actuator]**

> "Level 1 你们测试了独立的模块。
> 
> Level 2 我们要让它们**联动**：
> 
> **1个传感器 控制 1个执行器**
> 
> 示例：
> - 按钮按下 → LED亮起
> - 光线变暗 → 蜂鸣器响
> - 温度升高 → 风扇转动
> 
> 这就是**智能硬件的基本逻辑**。
> 
> 你有**25分钟**。"

#### 📊 PPT内容

```
Level 2: Sensor → Actuator
━━━━━━━━━━━━━━━━━━━━━━━━

任务：
创建一个程序，让1个传感器控制1个执行器

示例1：
Button → LED
按钮按下时LED亮，松开时LED灭

示例2：
Light Sensor → Buzzer
光线低于某个值时蜂鸣器响

示例3：
Temperature → Fan
温度高于25°C时风扇转动

提交：
/level2/sensor_to_actuator.ino
/level2/explanation.md

⏰ 时间：25分钟
━━━━━━━━━━━━━━━━━━━━━━━━
```

#### 📝 代码示例（给学生参考）

```cpp
// Example: Button → LED

const int buttonPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
```

---

#### Part B: 学生实操（25分钟）14:35-15:00

#### 🎤 讲师引导

> "Level 2 的核心是 **if-else 逻辑**：
> 
> ```
> if (传感器值满足条件) {
>   执行某个动作
> } else {
>   执行另一个动作
> }
> ```
> 
> 就这么简单。
> 
> 现在开始！"

#### 🛠️ 讲师巡场重点

**重点帮助**：
- 不理解if-else逻辑的学生
- 阈值设置不对的（比如光敏传感器阈值）
- 接线错误的

**提示性话术**：
> "你的传感器值是多少？先用Serial Monitor看看，然后设置一个合理的阈值。"
> 
> "按钮用INPUT_PULLUP模式会更稳定。"
> 
> "记得在explanation.md里解释你的逻辑。"

#### 🎯 Level 2成功标志

- [ ] 至少60%学生完成了联动程序
- [ ] 学生理解了条件判断（if-else）
- [ ] 学生能解释自己的设计逻辑

---

### 休息（10分钟）15:00-15:10

> "大家休息10分钟。
> 
> 喝水、上厕所、伸展一下。
> 
> 15:10准时回来，我们进入Level 3！"

---

### Level 3: 多传感器多执行器系统（40分钟）15:10-15:50

#### Part A: 关卡介绍（5分钟）15:10-15:15

#### 🎤 讲师话术

**[投影切换到 Slide 8: Level 3 - Multi-Control System]**

> "Level 3 是**系统级设计**：
> 
> **3个传感器 → 3个执行器**
> 
> 它们可以：
> - 独立工作（按钮1控制LED1，按钮2控制LED2）
> - 协同工作（温度+光线共同决定风扇）
> - 优先级控制（紧急按钮优先级最高）
> 
> 这就是**真实的智能设备**。
> 
> 你有**35分钟**。"

#### 📊 PPT内容

```
Level 3: Multi-Control System
━━━━━━━━━━━━━━━━━━━━━━━━

任务：
创建一个系统，包含：
✓ 至少3个传感器
✓ 至少3个执行器
✓ 有意义的控制逻辑

示例系统1：智能台灯
- 按钮：开关控制
- 光敏：自动调节亮度
- 声音：拍手控制

示例系统2：环境监测站
- 温度传感器 → LCD显示
- 光线传感器 → LED指示
- 按钮 → 切换显示模式

提交：
/level3/multi_control.ino
/level3/wiring.jpg
/level3/demo_video.mp4 (可选)

⏰ 时间：35分钟
━━━━━━━━━━━━━━━━━━━━━━━━
```

---

#### Part B: 学生实操（35分钟）15:15-15:50

#### 🎤 讲师引导

> "Level 3 需要你：
> 
> **1. 规划** - 先在纸上画出你的系统
> 
> **2. 分步实现** - 一个一个传感器加
> 
> **3. 测试** - 每加一个就测试一次
> 
> **4. 记录** - 拍照记录你的接线
> 
> 不要一次性把所有东西都接上，那样会很乱。
> 
> 开始！"

#### 🛠️ 讲师巡场重点

**帮助学生**：
- 设计系统架构（画框图）
- 管理多个传感器的代码结构
- 调试复杂的if-else逻辑
- 拍摄接线图（引导拍清晰照片）

**代码结构建议**：

```cpp
// 推荐结构
void setup() {
  // 初始化所有传感器和执行器
}

void loop() {
  // 1. 读取所有传感器
  int sensor1 = readSensor1();
  int sensor2 = readSensor2();
  int sensor3 = readSensor3();
  
  // 2. 根据逻辑控制执行器
  controlActuator1(sensor1);
  controlActuator2(sensor2, sensor3);
  controlActuator3(sensor1, sensor2);
  
  delay(100);
}
```

#### 🚨 常见问题

**问题1：代码太长太乱**
- 建议使用函数拆分
- 每个传感器一个读取函数
- 每个执行器一个控制函数

**问题2：接线太复杂**
- 建议用颜色区分（红色=电源，黑色=地，其他=信号）
- 用面包板整理接线
- 拍照前整理一下

**问题3：逻辑冲突**
- 先写伪代码，确定优先级
- 测试每个分支

#### 🎯 Level 3成功标志

- [ ] 至少40%学生完成了3传感器+3执行器系统
- [ ] 学生能拍摄清晰的接线图
- [ ] 学生理解了系统设计的思路

---

### Level 4: Mini Project 创作（50分钟）15:50-16:40

#### Part A: 关卡介绍（5分钟）15:50-15:55

#### 🎤 讲师话术

**[投影切换到 Slide 9: Level 4 - Mini Project]**

> "Level 4 是**你的第一个作品**！
> 
> 不再是练习，这是**真正的创作**。
> 
> 你可以：
> - 基于Level 3改进
> - 做一个全新的创意
> - 解决一个实际问题
> 
> **作品示例**：
> - 声控灯（拍手开关）
> - 自动浇花系统（土壤湿度控制）
> - 情绪灯（根据环境变化颜色）
> - 简易报警器（红外检测）
> - 智能风扇（温度自适应）
> - 你的任何创意！
> 
> 你有**45分钟**创作 + 录视频。
> 
> 这个作品，你会发布到全世界的创客社区。
> 
> 准备好了吗？"

#### 📊 PPT内容

```
Level 4: Mini Project
━━━━━━━━━━━━━━━━━━━━━━━━

任务：
创作一个完整的智能硬件作品

要求：
✓ 有明确的功能和用途
✓ 使用至少2个传感器或执行器
✓ 有完整的接线和代码
✓ 录制10-30秒demo视频
✓ 准备发布到创客社区

提交：
/final/README.md (完整项目文档)
/final/code.ino
/final/wiring.jpg
/final/demo_video.mp4
/final/hackster_link.txt
/final/oschina_link.txt

⏰ 时间：45分钟

这是你的第一个创客作品！
━━━━━━━━━━━━━━━━━━━━━━━━
```

---

#### Part B: 创意时间（5分钟）15:55-16:00

#### 🎤 讲师引导

> "在开始之前，花5分钟想清楚：
> 
> **1. 你想做什么？**（一句话描述）
> 
> **2. 它解决什么问题？**（为什么有用）
> 
> **3. 需要哪些模块？**（传感器+执行器）
> 
> 可以在纸上画一个草图。
> 
> 想好了就开始做！"

**[给学生5分钟思考和草图]**

---

#### Part C: 创作时间（30分钟）16:00-16:30

#### 🛠️ 讲师在这30分钟的角色

**1. 创意顾问**：
- 帮助学生简化过于复杂的想法
- 建议可行的技术方案
- 鼓励创新

**2. 技术支持**：
- 解决卡住的技术问题
- 提供代码片段参考
- 帮助调试

**3. 时间管理**：
- 提醒剩余时间
- 建议优先完成核心功能
- 鼓励先做出能工作的版本

**时间提醒**：
- 16:10："还有20分钟，确保核心功能能工作！"
- 16:20："还有10分钟，准备录制视频！"
- 16:25："最后5分钟，录视频！"

#### 🎤 鼓励性话术

> "不需要完美，能工作就是成功！"
> 
> "这是你的第一个作品，它已经很了不起了！"
> 
> "记得录视频，10秒就够，展示它能做什么。"
> 
> "你做的东西，今晚就会在互联网上被全世界看到。"

---

#### Part D: 视频录制指导（10分钟）16:30-16:40

#### 🎤 讲师话术

> "现在每个人录一个10-30秒的Demo视频。
> 
> **录视频的3个要点**：
> 
> **1. 展示功能** - 让别人看懂它能做什么
> 
> **2. 简短有力** - 10秒就够，不要太长
> 
> **3. 稳定清晰** - 手机放稳，光线充足
> 
> **录制方式**：
> - 用手机录制
> - 可以横屏或竖屏
> - 保存到手机，稍后上传
> 
> **视频内容建议**：
> - 0-3秒：展示整体
> - 3-10秒：演示核心功能
> - 10秒后：（可选）补充说明
> 
> 现在开始录！"

#### 📱 视频上传选项

**选项1：上传到Bilibili（推荐）**
- 速度快
- 中国学生熟悉
- 链接稳定

**选项2：上传到YouTube**
- 国际通用
- 需要科学上网

**选项3：直接上传到GitHub仓库**
- 文件小于100MB可以直接上传
- 或使用Git LFS

#### 🎯 Level 4成功标志

- [ ] 每个学生都有一个能工作的作品
- [ ] 所有学生都录制了Demo视频
- [ ] 学生对自己的作品感到自豪

---

## 环节4：README写作 + 社区发布（40分钟）
**时间**: 16:40 - 17:20  
**目标**: 学生完成专业的项目文档，发布到Hackster或OSChina

### Part A: README重要性讲解（5分钟）16:40-16:45

#### 🎤 讲师话术

**[投影切换到 Slide 10: Why README Matters]**

> "你们刚才完成了作品。
> 
> 但是，**作品不等于成果**。
> 
> 成果 = 作品 + 文档。
> 
> **为什么需要README？**
> 
> 1. **让别人看懂你做了什么** - 没有文档，再酷的作品也是垃圾
> 
> 2. **记录你的思考过程** - 5年后你自己都会忘
> 
> 3. **展示你的专业性** - README是你的名片
> 
> 4. **帮助他人学习** - 开源的核心
> 
> **今天，我们要用全世界创客都在用的格式写README。**
> 
> 这个格式来自 **Hackster.io** - 全球最大的硬件项目分享平台。"

---

### Part B: README模板讲解（10分钟）16:45-16:55

#### 📊 PPT展示完整模板

**[投影切换到 Slide 11: README Template]**

```markdown
# Project Title

## Inspiration
（我为什么要做这个项目？）

## What it does
（它能做什么？核心功能是什么？）

## How we built it
（使用了哪些硬件和软件？代码结构如何？）

## Challenges we ran into
（遇到了什么困难？如何解决的？）

## Accomplishments that we're proud of
（我完成了什么值得骄傲的地方？）

## What we learned
（学到了什么新技能或知识？）

## What's next for your project
（未来想如何改进？）

## Bill of Materials (BOM)
（材料清单）

## Wiring Diagram
（接线图）

## Demo Video
（演示视频）

## Code
（代码链接）
```

#### 🎤 讲师逐节讲解

**1. Project Title（项目名称）**

> "给你的项目起一个简短、有吸引力的名字。
> 
> 好的例子：
> - Smart Plant Monitor
> - Clap-Controlled Light
> - Emotion Lamp
> 
> 不好的例子：
> - Project 1
> - Arduino Thing
> - Untitled"

**2. Inspiration（灵感）**

> "为什么做这个项目？
> 
> 例子：
> 'I always forget to water my plants, so I wanted to create a system that reminds me when the soil is dry.'
> 
> '我经常忘记浇花，所以想做一个系统在土壤干燥时提醒我。'"

**3. What it does（功能）**

> "用2-3句话说明它能做什么。
> 
> 例子：
> 'This device monitors soil moisture and lights up an LED when watering is needed. It also displays the moisture level on an LCD screen.'
> 
> '这个设备监测土壤湿度，当需要浇水时点亮LED。它还在LCD屏幕上显示湿度水平。'"

**4. How we built it（如何实现）**

> "列出你用的硬件和主要代码逻辑。
> 
> 例子：
> 'Hardware: Arduino Uno, soil moisture sensor, LED, LCD1602
> 
> The Arduino reads analog values from the moisture sensor every 2 seconds. If the value drops below 300, it turns on the LED and displays a warning on the LCD.'"

**5. Challenges（挑战）**

> "诚实地写出你遇到的困难。
> 
> 例子：
> - 'The sensor readings were unstable, so I added a delay and averaging.'
> - 'I had trouble with the LCD library at first, but found the solution on Arduino forums.'
> 
> **失败和困难是学习的证据！**"

**6. Accomplishments（成就）**

> "写出你为什么感到自豪。
> 
> 例子：
> - 'This is my first working hardware project!'
> - 'I learned how to use the LCD display, which was completely new to me.'
> - 'I solved a real problem in my daily life.'"

**7. What we learned（学到了什么）**

> "具体写出你学到的技能。
> 
> 例子：
> - 'How to read analog sensors'
> - 'How to use if-else logic for control'
> - 'How to debug hardware issues'
> - 'How to use Git and GitHub'"

**8. What's next（未来计划）**

> "项目可以如何改进？
> 
> 例子：
> - 'Add a buzzer for audio alerts'
> - 'Connect to WiFi and send notifications to my phone'
> - 'Make it solar-powered'
> - 'Design a 3D-printed enclosure'"

**9-12. BOM, Wiring, Video, Code**

> "这些部分放链接和图片：
> - BOM：列出所有材料
> - Wiring：上传接线图照片
> - Video：放Bilibili或YouTube链接
> - Code：链接到你的GitHub仓库"

---

### Part C: 学生写作时间（20分钟）16:55-17:15

#### 🎤 讲师引导

> "现在打开你的`/final/README.md`文件。
> 
> 复制我给你的模板，然后填写每一节。
> 
> **写作提示**：
> 
> 1. **用第一人称** - "I built..." 而不是 "We built..."（除非是团队）
> 
> 2. **具体而非抽象** - 写具体数字、具体模块名称
> 
> 3. **诚实** - 不要夸大，也不要隐藏失败
> 
> 4. **可以用中文** - 中文写完可以用AI翻译成英文
> 
> 你有20分钟。
> 
> 开始！"

#### 🛠️ 讲师巡场支持

**帮助学生**：
- 不知道怎么写的section
- 组织语言（可以先中文，再翻译）
- 检查markdown格式
- 上传图片

**AI辅助建议**：

> "可以用Cursor或ChatGPT帮你：
> 
> - 翻译中文到英文
> - 优化语言表达
> - 生成BOM清单
> 
> 但核心内容必须是你自己的！"

#### 📝 提示词示例

给学生提供AI提示词：

```
Prompt 1: 翻译
"Please translate the following Chinese text to English, 
keeping the technical terms accurate:
[你的中文内容]"

Prompt 2: 优化
"Please improve the following project description to make 
it more professional and clear:
[你的英文初稿]"

Prompt 3: 生成BOM
"Based on my project description, please generate a Bill 
of Materials list in markdown table format."
```

#### 🎯 写作成功标志

**20分钟结束时**：
- [ ] 至少70%学生完成了README的主要部分
- [ ] 所有学生理解了每个section的目的
- [ ] README包含必要的信息（功能、硬件、代码）

---

### Part D: 社区发布指导（5分钟）17:15-17:20

#### 🎤 讲师话术

**[投影切换到 Slide 12: Publishing to Community]**

> "现在，你要把你的作品发布到真正的创客社区！
> 
> **两个平台**：
> 
> **1. Hackster.io**（国际）
> - 全球最大的硬件项目平台
> - 需要英文
> - 可能需要科学上网
> 
> **2. 开源中国 · 造物社区**（国内）
> - 中国最大的开源社区
> - 支持中文
> - 访问稳定
> 
> **你可以选择其中一个，或者两个都发布。**
> 
> 现在我快速演示一下流程。"

#### 📺 快速演示（3分钟）

**Hackster.io流程**：

1. 访问 hackster.io
2. 注册/登录
3. 点击 "Create Project"
4. 填写：
   - Project Name
   - Cover Image（封面图）
   - Story（复制你的README）
   - Components（选择你用的硬件）
   - Upload photos/videos
5. 发布

**OSChina流程**：

1. 访问 oschina.net/ai-creation
2. 注册/登录
3. 点击 "发布作品"
4. 填写：
   - 作品标题
   - 封面图片
   - 作品介绍（README）
   - 使用的硬件
   - 上传视频
5. 发布

> "发布后，把链接保存到：
> `/final/hackster_link.txt` 或
> `/final/oschina_link.txt`
> 
> 这样我在Review你的PR时能看到你的公开作品。
> 
> **今晚回去完成发布，明天我要看到你们的作品链接！**"

---

## 环节5：PR提交 + 课程总结（10分钟）
**时间**: 17:20 - 17:30  
**目标**: 学生提交完整的Assignment A1，总结今日学习

### Part A: PR提交指导（5分钟）17:20-17:25

#### 🎤 讲师话术

**[投影切换到 Slide 13: Submit Your Work]**

> "现在，把你所有的工作提交到GitHub！
> 
> **检查清单**：
> 
> /level1/ ✓ 至少6个传感器+6个执行器的测试文档
> /level2/ ✓ sensor_to_actuator.ino + explanation.md
> /level3/ ✓ multi_control.ino + wiring.jpg
> /final/  ✓ README.md + code.ino + wiring.jpg + demo_video (或链接)
> 
> **提交步骤**：
> 
> 1. 在GitHub Desktop或命令行 `git add .`
> 2. Commit: `git commit -m "Complete Hardware CTF - Day 1"`
> 3. Push: `git push origin main`
> 
> 4. 在GitHub网页上创建Pull Request：
>    - 标题：`[A1] Your Name - Completed Hardware CTF`
>    - 描述：简单说明你完成了什么
> 
> 5. 提交PR后，你就完成了今天的所有任务！"

#### 🛠️ 现场帮助

- 学生第一次创建PR可能会卡住
- 手把手帮助前3-5个学生
- 让完成的学生帮助旁边的同学

---

### Part B: 今日总结（5分钟）17:25-17:30

#### 🎤 讲师总结话术

**[投影切换到 Slide 14: What We Accomplished Today]**

> "让我们回顾一下今天你们完成了什么：
> 
> **上午**：
> ✓ 理解了Maker文化
> ✓ 完成了Spaghetti Challenge
> ✓ 建立了Maker身份
> ✓ 加入了GitHub Classroom
> 
> **下午**：
> ✓ 学会了Git基本操作
> ✓ 上传了第一个Arduino程序
> ✓ 测试了十几个硬件模块
> ✓ 创建了传感器-执行器联动
> ✓ 设计了多传感器系统
> ✓ 完成了第一个Mini Project
> ✓ 写了专业的项目文档
> ✓ 录制了Demo视频
> ✓ 准备发布到创客社区
> 
> **这是一个非常高产的一天！**"

**[停顿，让学生鼓掌]**

> "今天只是开始。
> 
> 接下来5天，你们会：
> - 学习更高级的硬件技术
> - 集成AI模型到你的设备
> - 设计3D打印外壳
> - 完成一个完整的最终项目
> 
> **今晚的作业**：
> 
> 1. 完成README写作（如果还没写完）
> 2. 发布到Hackster或OSChina
> 3. 提交PR到GitHub Classroom
> 4. 好好休息！
> 
> **明天见！你们太棒了！** 🎉"

---

## 📊 时间管理总结表

| 环节 | 标准时长 | 核心内容 | 可压缩版 |
|------|---------|---------|---------|
| 1. Git实操训练 | 30分钟 | Git工作流+提交A0 | 20分钟 |
| 2. Arduino入门 | 20分钟 | 环境设置+Blink | 15分钟 |
| 3. Level 1 | 40分钟 | 传感器执行器测试 | 30分钟 |
| 4. Level 2 | 30分钟 | 传感器→执行器联动 | 20分钟 |
| 5. 休息 | 10分钟 | - | 5分钟 |
| 6. Level 3 | 40分钟 | 多传感器系统 | 30分钟 |
| 7. Level 4 | 50分钟 | Mini Project创作 | 40分钟 |
| 8. README+发布 | 40分钟 | 文档写作+社区发布 | 30分钟 |
| 9. PR+总结 | 10分钟 | 提交+回顾 | 5分钟 |
| **总计** | **270分钟** | **4.5小时** | **195分钟** |

---

## 🚨 应急预案速查

### 问题1：学生无法访问GitHub

**解决方案**：
- 换手机热点
- 使用GitHub Desktop（比网页稳定）
- 最坏情况：本地保存，晚上回家提交

### 问题2：Arduino IDE无法识别端口

**解决方案**：
1. 检查USB线（换一根试试）
2. 安装CH340驱动（助教现场安装）
3. 换USB接口
4. 换Arduino板（准备备用板）
5. 重启Arduino IDE

### 问题3：Hackster.io无法访问

**解决方案**：
- 改为只发布到OSChina
- 或晚上回家用VPN发布
- 提交README+视频即可，不强制要求Hackster链接

### 问题4：传感器不工作

**解决方案**：
1. 检查接线（VCC、GND、Signal）
2. 检查引脚号
3. 换一个相同传感器（套件有备份）
4. 换一个不同类型的传感器（不影响分数）

### 问题5：时间严重不足

**最小可交付版本**：
- Level 1：至少测试4个模块（2传感器+2执行器）
- Level 2：可跳过，直接做Level 3
- Level 3：简化为2传感器+2执行器
- Level 4：基于Level 3快速改进，录10秒视频
- README：只写核心section（Inspiration + What it does + How we built it）

### 问题6：学生完全不会代码

**解决方案**：
- 提供更多示例代码模板
- 允许修改示例代码（不要求从零写）
- 重点看硬件连接和功能实现
- 鼓励使用AI辅助（Cursor/ChatGPT）

### 问题7：视频太大无法上传GitHub

**解决方案**：
- 上传到Bilibili/YouTube，提交链接
- 或压缩视频（降低分辨率）
- 或使用Git LFS（高级选项）

---

## ✅ 下午成功标志

### 学生层面

**技术能力**：
- [ ] 能独立完成Git操作（clone, commit, push）
- [ ] 能上传代码到Arduino板
- [ ] 能连接传感器和执行器
- [ ] 能写基本的if-else控制逻辑
- [ ] 能拍摄接线图和视频

**作品产出**：
- [ ] 至少完成Level 1和Level 4
- [ ] 有一个能工作的Mini Project
- [ ] 有完整的README文档
- [ ] 录制了Demo视频

**心态与信心**：
- [ ] 对自己的作品感到自豪
- [ ] 愿意分享到社区
- [ ] 相信自己能继续学习

### 教师层面

**教学效果**：
- [ ] 至少70%学生完成核心任务
- [ ] 所有技术问题都得到处理
- [ ] 学生理解了今天的核心概念

**课堂氛围**：
- [ ] 学生积极参与
- [ ] 互相帮助的氛围良好
- [ ] 没有学生完全放弃

**资料准备**：
- [ ] 拍摄了关键教学时刻
- [ ] 记录了常见问题
- [ ] 为明天的课程做好准备

---

## 📞 紧急联系

**技术支持**: [助教/技术人员]  
**硬件补充**: [实验室管理员]  
**网络问题**: [IT支持]  
**医疗急救**: [校医/急救电话]

---

## 📝 课后5分钟

**立即做**：
1. 检查GitHub Classroom，看有多少学生提交了PR
2. 整理今天的照片和视频
3. 记录技术问题和解决方案
4. 喝水、休息

**今晚做**：
1. Review学生的PR（至少看一眼）
2. 准备明天的课程材料
3. 回复学生的Issue（如果有）

**明天课前**：
1. 展示今天最好的几个作品
2. 总结今天的常见问题
3. 为Day 2做好准备

---

**祝你下午顺利！记住：你的热情和耐心会决定学生的学习体验。** 🚀

**You've got this!**

