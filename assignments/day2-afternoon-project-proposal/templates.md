# Project Proposal Templates
# 项目提案模板

Use these templates as starting points for your proposal documents!

使用这些模板作为提案文档的起点！

---

## 📄 Template: README.md

```markdown
# [Project Title]
# [项目标题]

**Team Name**: [Your team name]  
**Team Members**:
- [Name 1] - [Role: e.g., Hardware Lead]
- [Name 2] - [Role: e.g., Software Lead]
- [Name 3] - [Role: e.g., Documentation Lead]
- [Name 4] - [Role: e.g., Integration Lead]

---

## One-Sentence Pitch | 一句话介绍

[In one sentence, what is your project?]

[一句话说明你的项目是什么？]

---

## Problem Statement | 问题陈述

### What problem exists? | 存在什么问题？

[Describe the problem in detail]

[详细描述问题]

### Who experiences this problem? | 谁经历这个问题？

[Who are the users? What is their situation?]

[用户是谁？他们的情况如何？]

### Why is this important? | 为什么这很重要？

[Why does this problem matter? What are the consequences?]

[为什么这个问题重要？有什么后果？]

---

## Proposed Solution | 提议的解决方案

### How will your project solve it? | 你的项目如何解决？

[Explain your solution approach]

[解释你的解决方案方法]

### Key Features | 关键功能

1. **Feature 1**: [Description]
2. **Feature 2**: [Description]
3. **Feature 3**: [Description]

### What makes it unique? | 什么使其独特？

[What's innovative or different about your approach?]

[你的方法有什么创新或不同？]

---

## Target Users | 目标用户

### Who will use this? | 谁会使用这个？

[Describe your target users]

[描述你的目标用户]

### User Scenarios | 用户场景

**Scenario 1**:
[Describe a typical use case]

**Scenario 2**:
[Describe another use case]

---

## Expected Impact | 预期影响

[What positive change will this create?]

[这将创造什么积极变化？]
```

---

## 📄 Template: requirements.md

```markdown
# Project Requirements
# 项目要求

## Technical Requirements | 技术要求

### Hardware | 硬件

- **Microcontroller**: [e.g., Arduino Uno, ESP32]
- **Sensors**:
  - [Sensor 1]: [Purpose]
  - [Sensor 2]: [Purpose]
- **Actuators**:
  - [Actuator 1]: [Purpose]
  - [Actuator 2]: [Purpose]
- **Power**: [Battery type, voltage requirements]
- **Other Components**: [Displays, modules, etc.]

### Software | 软件

- **Development Environment**: [Arduino IDE, PlatformIO, etc.]
- **Libraries Required**:
  - [Library 1]: [Version, purpose]
  - [Library 2]: [Version, purpose]
- **Programming Languages**: [C++, Python, etc.]

### Connectivity (if applicable) | 连接性（如适用）

- [ ] WiFi
- [ ] Bluetooth
- [ ] Serial/USB
- [ ] Other: ___________

---

## Functional Requirements | 功能要求

### Core Functionality | 核心功能

The system **MUST**:

1. [Requirement 1]
2. [Requirement 2]
3. [Requirement 3]

### Secondary Features | 次要功能

The system **SHOULD**:

1. [Nice-to-have feature 1]
2. [Nice-to-have feature 2]

### User Interface | 用户界面

The user **MUST BE ABLE TO**:

1. [User action 1]
2. [User action 2]
3. [User action 3]

---

## Success Criteria | 成功标准

### How will we know it works? | 我们如何知道它工作？

- [ ] **Criterion 1**: [Measurable outcome]
- [ ] **Criterion 2**: [Measurable outcome]
- [ ] **Criterion 3**: [Measurable outcome]

### Testing Plan | 测试计划

**Test 1**: [What we'll test]
- Expected result: [What should happen]
- Method: [How we'll test it]

**Test 2**: [What we'll test]
- Expected result: [What should happen]
- Method: [How we'll test it]

---

## Constraints & Limitations | 约束和限制

### Known Limitations | 已知限制

- [Limitation 1]
- [Limitation 2]

### Assumptions | 假设

- [Assumption 1]
- [Assumption 2]
```

---

## 📄 Template: materials.md

```markdown
# Bill of Materials (BOM)
# 材料清单

## Components List | 组件列表

| Component | Quantity | Specifications | Available? | Source | Notes |
|-----------|----------|----------------|------------|--------|-------|
| Arduino Uno | 1 | ATmega328P, 5V | ✅ Yes | Course Kit | |
| [Component 2] | [#] | [Specs] | ✅/❌ | [Where from] | [Notes] |
| [Component 3] | [#] | [Specs] | ✅/❌ | [Where from] | [Notes] |

---

## Availability Status | 可用性状态

### Have Now | 现在有

- [Component 1]
- [Component 2]

### Need to Obtain | 需要获取

- [Component A] - Source: [Where to get]
- [Component B] - Source: [Where to get]

---

## Backup Options | 备选方案

If [Component X] is unavailable:
- **Plan B**: Use [Alternative component]
- **Impact**: [How this changes the project]

---

## Budget Estimate | 预算估计

| Item | Cost (¥) | 项目 | 成本（¥）|
|------|---------|------|---------|
| [Item 1] | ¥XX | | |
| [Item 2] | ¥XX | | |
| **TOTAL** | **¥XXX** | **总计** | |

**Budget approved by**: ___________
```

---

## 📄 Template: timeline.md

```markdown
# Project Timeline
# 项目时间表

**Project Duration**: Days 3-6 (4 days)  
**Team**: [Team Name]

---

## Day 3: [Date] - Foundation | 基础

**Goal**: [Main goal for the day]

### Morning Session (9:00-12:00)

**Tasks**:
- [ ] **Task 1** (Assigned to: [Name])
  - Time estimate: [X hours]
  - Dependencies: [None / Task Y]
  - Description: [What to do]

- [ ] **Task 2** (Assigned to: [Name])
  - Time estimate: [X hours]
  - Dependencies: [None / Task Y]
  - Description: [What to do]

**Morning Checkpoint** (12:00):
- [ ] [What should be completed]

### Afternoon Session (13:00-17:00)

**Tasks**:
- [ ] **Task 3** (Assigned to: [Name])
  - Description: [What to do]

- [ ] **Task 4** (Assigned to: [Name])
  - Description: [What to do]

**End of Day Checkpoint** (17:00):
- [ ] [What should be working by end of day]

---

## Day 4: [Date] - Integration | 集成

**Goal**: [Main goal for the day]

### Morning Session (9:00-12:00)

**Tasks**:
[Repeat structure from Day 3]

**Morning Checkpoint** (12:00):
- [ ] [Checkpoint]

### Afternoon Session (13:00-17:00)

**Tasks**:
[Repeat structure]

**End of Day Checkpoint** (17:00):
- [ ] [Checkpoint]

---

## Day 5: [Date] - Refinement | 完善

**Goal**: [Main goal for the day]

### Morning Session (9:00-12:00)

**Tasks**:
[Continue structure]

### Afternoon Session (13:00-17:00)

**Tasks**:
[Continue structure]

**End of Day Checkpoint** (17:00):
- [ ] System fully functional
- [ ] Testing complete

---

## Day 6: [Date] - Presentation | 展示

**Goal**: Final polish and presentation preparation

### Morning Session (9:00-12:00)

**Tasks**:
- [ ] **Final testing** (All)
- [ ] **Create presentation** (All)
- [ ] **Prepare demo** (All)
- [ ] **Documentation finalization** (Documentation Lead)

### Afternoon Session (13:00-17:00)

**Tasks**:
- [ ] **Rehearse presentation** (All)
- [ ] **Final project presentation** (All)

---

## Risk Management | 风险管理

### Potential Risks | 潜在风险

| Risk | Probability | Impact | Mitigation Strategy | 风险 | 概率 | 影响 | 缓解策略 |
|------|-------------|--------|---------------------|------|------|------|---------|
| [Risk 1] | High/Med/Low | High/Med/Low | [Strategy] | | | | |
| [Risk 2] | High/Med/Low | High/Med/Low | [Strategy] | | | | |

---

## Dependencies & Critical Path | 依赖关系和关键路径

**Critical Path** (must complete in order):
1. [Task A] → 2. [Task B] → 3. [Task C]

**Parallel Tasks** (can do simultaneously):
- [Task X] and [Task Y]
```

---

**Use these templates and customize them for your project!** ✨

**使用这些模板并为你的项目定制！** ✨

