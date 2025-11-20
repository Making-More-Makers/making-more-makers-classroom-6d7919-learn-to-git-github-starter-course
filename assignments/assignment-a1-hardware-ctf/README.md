# Assignment A1 — Hardware CTF
# 作业 A1 — 硬件 CTF

**Due Date**: End of Day 1 (11:59 PM) | 截止时间：第1天结束（晚上11:59）  
**Type**: Individual Assignment | 类型：个人作业  
**Points**: 40 points (40%) | 40分（40%）

---

## 🎯 Assignment Overview | 作业概览

Welcome to Hardware CTF! This assignment will take you through 4 levels of increasing difficulty, from testing individual sensors to creating your first complete maker project.

欢迎来到硬件CTF！这个作业将带你完成4个难度递增的关卡，从测试单个传感器到创建你的第一个完整创客项目。

---

## 📦 What You'll Build | 你将完成什么

By the end of this assignment, you will have:

完成此作业后，你将拥有：

- ✅ Tested 12+ hardware modules
- ✅ Built sensor-actuator control systems
- ✅ Created a complete Mini Project
- ✅ Written professional project documentation
- ✅ Published your project to the maker community

- ✅ 测试了12+个硬件模块
- ✅ 构建了传感器-执行器控制系统
- ✅ 创建了一个完整的迷你项目
- ✅ 编写了专业的项目文档
- ✅ 将项目发布到创客社区

---

## 🏆 CTF Levels | CTF 关卡

### Level 1: Sensor & Actuator Testing (10 points)
**第1关：传感器与执行器测试（10分）**

**Mission**: Test 6 sensors and 6 actuators from your hardware kits.

**任务**：从硬件套件中测试6个传感器和6个执行器。

**Deliverables**:
- `/level1/sensors/` (Total 12 files)
  - `*.md,` (6 files)
  - `*.ino` (6 files)
- `/level1/actuators/` (Total 12 files)
  - `*.md,` (6 files)
  - `*.ino` (6 files)
  
**Requirements**:
- Each file documents one module
- Include: hardware used, wiring, code, test result
- At least one photo of wiring (optional)

**要求**：
- 每个文件记录一个模块
- 包括：使用的硬件、接线、代码、测试结果
- 至少一张接线照片（可选）

---

### Level 2: Sensor to Actuator (10 points)
**第2关：传感器到执行器（10分）**

**Mission**: Create a system where 1 sensor controls 1 actuator.

**任务**：创建一个系统，让1个传感器控制1个执行器。

**Deliverables**:
- `/level2/sensor_to_actuator.ino`
- `/level2/explanation.md`

**Requirements**:
- Working code demonstrating sensor → actuator control
- Clear explanation of the logic
- Examples: Button→LED, Light→Buzzer, Temperature→Fan

**要求**：
- 演示传感器→执行器控制的工作代码
- 清楚解释逻辑
- 示例：按钮→LED、光线→蜂鸣器、温度→风扇

---

### Level 3: Multi-Control System (10 points)
**第3关：多控制系统（10分）**

**Mission**: Build a system with at least 3 sensors and 3 actuators.

**任务**：构建一个至少包含3个传感器和3个执行器的系统。

**Deliverables**:
- `/level3/multi_control.ino`
- `/level3/wiring.jpg`
- `/level3/explanation.md`

**Requirements**:
- Functional multi-sensor multi-actuator system
- Clear wiring diagram photo
- Explanation of system logic and interactions

**要求**：
- 功能完整的多传感器多执行器系统
- 清晰的接线图照片
- 解释系统逻辑和交互

---

### Level 4: Mini Project (10 points)
**第4关：迷你项目（10分）**

**Mission**: Create your first complete maker project!

**任务**：创建你的第一个完整创客项目！

**Deliverables**:
- `/final/README.md` (complete project documentation)
- `/final/code.ino`
- `/final/wiring.jpg`
- `/final/demo_video.mp4` (or link)
- `/final/hackster_link.txt` OR `/final/oschina_link.txt`

**Requirements**:
- Original project with clear purpose
- At least 2 sensors/actuators
- Complete README using Hackster format
- 10-30 second demo video
- Published to Hackster.io OR OSChina AI Creation

**要求**：
- 有明确用途的原创项目
- 至少2个传感器/执行器
- 使用Hackster格式的完整README
- 10-30秒演示视频
- 发布到Hackster.io或开源中国AI造物社区

---

## 📁 Repository Structure | 仓库结构

Your final repository should look like this:

你的最终仓库应该如下所示：

```
assignment-a1-hardware-ctf-[your-username]/
├── level1/
│   ├── sensors/
│   │   ├── light_sensor.md
│   │   ├── sound_sensor.md
│   │   ├── temperature_sensor.md
│   │   ├── button.md
│   │   ├── ir_sensor.md
│   │   └── tilt_sensor.md
│   └── actuators/
│       ├── led.md
│       ├── buzzer.md
│       ├── fan.md
│       ├── lcd.md
│       ├── motor.md
│       └── segment_display.md
├── level2/
│   ├── sensor_to_actuator.ino
│   └── explanation.md
├── level3/
│   ├── multi_control.ino
│   ├── wiring.jpg
│   └── explanation.md
└── final/
    ├── README.md
    ├── code.ino
    ├── wiring.jpg
    ├── demo_video.mp4 (or video_link.txt)
    └── hackster_link.txt (or oschina_link.txt)
```

---

## 🚀 How to Submit | 如何提交

### Step 1: Complete All Levels
完成所有关卡

### Step 2: Commit and Push
提交并推送

```bash
git add .
git commit -m "Complete Hardware CTF - Day 1"
git push origin main
```

### Step 3: Create Pull Request
创建Pull Request

1. Go to your repository on GitHub
2. Click "Pull Requests" → "New Pull Request"
3. Title: `[A1] Your Name - Completed Hardware CTF`
4. Description: Brief summary of what you built
5. Submit!

**标题格式**: `[A1] 你的名字 - Completed Hardware CTF`

---

## 📊 Grading Rubric | 评分标准

| Level | Points | Criteria |
|-------|--------|----------|
| **Level 1** | 10 | 6 sensors + 6 actuators tested, documented |
| **Level 2** | 10 | Sensor→actuator logic works, well explained |
| **Level 3** | 10 | 3+ sensors, 3+ actuators, system works, wiring clear |
| **Level 4** | 10 | Complete project, README, video, published online |
| **Total** | **40** | |

### Detailed Rubric

**Level 1 (10 points)**:
- 12 modules tested (6 sensors + 6 actuators): 8 points
- Documentation quality: 2 points

**Level 2 (10 points)**:
- Code functionality: 6 points
- Logic explanation: 4 points

**Level 3 (10 points)**:
- System functionality: 5 points
- Wiring diagram: 3 points
- Documentation: 2 points

**Level 4 (10 points)**:
- Project functionality: 3 points
- README quality: 3 points
- Demo video: 2 points
- Community publishing: 2 points

---

## 💡 Tips for Success | 成功提示

### General Tips | 通用提示
- **Start simple, then build complexity** | 从简单开始，逐步构建复杂性
- **Test frequently** | 频繁测试
- **Document as you go** | 边做边记录
- **Ask for help when stuck** | 卡住时寻求帮助
- **Have fun and be creative!** | 享受过程并发挥创意！

### Code Tips | 代码提示
- Use `Serial.begin(9600)` and `Serial.println()` for debugging
- Comment your code to explain logic
- Test each sensor/actuator individually first
- Use meaningful variable names

### Hardware Tips | 硬件提示
- Double-check wiring before uploading code
- Red wire = Power (VCC, 5V, 3.3V)
- Black wire = Ground (GND)
- Organize your breadboard to avoid confusion
- Take photos before changing wiring

### Documentation Tips | 文档提示
- Write in English or Chinese (English preferred for Hackster)
- Be specific with numbers and details
- Include what DIDN'T work (challenges section)
- Make your README easy to follow

---

## 🆘 Getting Help | 获取帮助

### During Class | 课堂上
- Ask instructor or TAs
- Work with classmates
- Use the hardware reference guide

### After Class | 课后
- Create an Issue in the course repository
- Email instructor
- Check Arduino forums and documentation

### Useful Resources | 有用资源
- [Arduino Reference](https://www.arduino.cc/reference/en/)
- [DFRobot Wiki](https://wiki.dfrobot.com/)
- [Hackster.io Projects](https://www.hackster.io/projects)
- Course materials in `/docs`

---

## ⚠️ Important Notes | 重要说明

### Academic Integrity | 学术诚信
- You can reference others' code, but must understand and modify it
- Cite sources in your README
- Your Mini Project must be your own original work

### Late Submission | 迟交
- Within 24 hours: -10%
- 24-48 hours: -20%
- Over 48 hours: Not accepted

### Technical Issues | 技术问题
- Hardware damage: Report immediately, use backup modules
- Code not working: Document your debugging process
- Git issues: Contact instructor ASAP

---

## 🎉 After Submission | 提交后

Once your PR is submitted:
- Instructors will review your code and documentation
- You may receive feedback via PR comments
- Your project will be visible to classmates
- You can continue to improve it!

提交PR后：
- 讲师将审查你的代码和文档
- 你可能通过PR评论收到反馈
- 你的项目对同学可见
- 你可以继续改进它！

---

## 🌟 Bonus Opportunities | 加分机会

Extra credit (up to +5 points) for:
- Exceptional project creativity
- Particularly well-written documentation
- Helping other students (documented in Issues)
- Publishing to BOTH Hackster and OSChina

额外学分（最多+5分）：
- 项目特别有创意
- 文档特别专业
- 帮助其他学生（在Issues中记录）
- 同时发布到Hackster和开源中国

---

**Good luck and happy making!**  
**祝你好运，享受创造的过程！**

**From today, you are a Maker!**  
**从今天起，你是一个Maker！**

