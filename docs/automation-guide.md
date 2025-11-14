# GitHub Automation & Tools Guide
# GitHub自动化与工具指南

[English](#english) | [中文](#chinese)

---

<a name="english"></a>
## 📋 Overview

This guide helps instructors set up automation, labels, and project management tools for the Making More Makers course.

---

## 🏷️ Issue Labels

### Creating Labels

Navigate to your repository → Issues → Labels → New label

### Recommended Label System

#### By Type
- `question` - Student questions (🟦 Blue `#0075ca`)
- `project-update` - Daily progress reports (🟩 Green `#0e8a16`)
- `materials` - Materials requests (🟪 Purple `#5319e7`)
- `bug` - Code or hardware bugs (🟥 Red `#d73a4a`)
- `documentation` - Documentation issues (📝 `#0075ca`)
- `enhancement` - Feature requests (✨ `#a2eeef`)

#### By Day
- `day1` - Day 1 related (🔴 `#ff0000`)
- `day2` - Day 2 related (🟠 `#ff8c00`)
- `day3` - Day 3 related (🟡 `#ffd700`)
- `day4` - Day 4 related (🟢 `#00ff00`)
- `day5` - Day 5 related (🔵 `#0000ff`)
- `day6` - Day 6 related (🟣 `#8b00ff`)

#### By Priority
- `urgent` - Needs immediate attention (🚨 `#b60205`)
- `high-priority` - Important (⚠️ `#d93f0b`)
- `low-priority` - Can wait (ℹ️ `#0e8a16`)

#### By Status
- `pending` - Awaiting response (⏳ `#fbca04`)
- `in-progress` - Being worked on (🔄 `#1d76db`)
- `resolved` - Issue resolved (✅ `#0e8a16`)
- `wontfix` - Will not be addressed (❌ `#ffffff`)

#### By Assignment
- `assignment1` - Related to Assignment 1
- `assignment2` - Related to Assignment 2
- `assignment3` - Related to Assignment 3
- `final-project` - Related to Final Project

### Bulk Label Creation Script

```bash
#!/bin/bash
# create-labels.sh

REPO="your-org/your-repo"

# Function to create label
create_label() {
  gh label create "$1" --color "$2" --description "$3" --repo $REPO
}

# Type labels
create_label "question" "0075ca" "Student question"
create_label "project-update" "0e8a16" "Daily progress update"
create_label "materials" "5319e7" "Materials request"
create_label "bug" "d73a4a" "Something isn't working"

# Day labels
create_label "day1" "ff0000" "Day 1 related"
create_label "day2" "ff8c00" "Day 2 related"
create_label "day3" "ffd700" "Day 3 related"
create_label "day4" "00ff00" "Day 4 related"
create_label "day5" "0000ff" "Day 5 related"
create_label "day6" "8b00ff" "Day 6 related"

# Priority labels
create_label "urgent" "b60205" "Needs immediate attention"
create_label "high-priority" "d93f0b" "Important issue"
create_label "low-priority" "0e8a16" "Can wait"

# Status labels
create_label "pending" "fbca04" "Awaiting response"
create_label "in-progress" "1d76db" "Being worked on"
create_label "resolved" "0e8a16" "Issue resolved"
```

**Usage:**
```bash
chmod +x create-labels.sh
./create-labels.sh
```

---

## 📊 GitHub Projects Setup

### Creating a Project Board

1. Go to your organization or repository
2. Click "Projects" → "New project"
3. Choose template: "Team backlog" or "Board"
4. Name: "Making More Makers - Course Tracker"

### Recommended Board Columns

#### Option 1: Task-Based
- 📋 **Backlog** - Tasks not yet started
- 🚧 **In Progress** - Currently being worked on
- 👀 **Review** - Awaiting instructor review
- ✅ **Done** - Completed
- ❓ **Blocked** - Needs attention

#### Option 2: Day-Based
- **Day 1** - Day 1 activities
- **Day 2** - Day 2 activities
- **Day 3-4** - Development sprint
- **Day 5** - Finalization
- **Day 6** - Presentations

### Automation Rules

**Auto-add to project:**
- When issue is created → Add to "Backlog"
- When issue is assigned → Move to "In Progress"
- When issue is closed → Move to "Done"

**Set up in Project Settings → Workflows:**

1. **Item added to project**
   - Set Status: Backlog

2. **Item assigned**
   - Set Status: In Progress

3. **Item closed**
   - Set Status: Done

### Custom Fields

Add these fields to track additional information:

- **Team**: Dropdown (Team A, Team B, Team C...)
- **Day**: Dropdown (Day 1-6)
- **Assignment**: Dropdown (Assignment 1-3, Final Project)
- **Priority**: Dropdown (Low, Medium, High, Urgent)

---

## 🤖 GitHub Actions Workflows

### Auto-Labeling Workflow

Create `.github/workflows/auto-label.yml`:

```yaml
name: Auto Label Issues

on:
  issues:
    types: [opened]

jobs:
  label:
    runs-on: ubuntu-latest
    steps:
      - name: Label questions
        if: contains(github.event.issue.title, '[QUESTION]')
        uses: actions/github-script@v6
        with:
          script: |
            github.rest.issues.addLabels({
              owner: context.repo.owner,
              repo: context.repo.repo,
              issue_number: context.issue.number,
              labels: ['question']
            })
      
      - name: Label materials requests
        if: contains(github.event.issue.title, '[MATERIALS]')
        uses: actions/github-script@v6
        with:
          script: |
            github.rest.issues.addLabels({
              owner: context.repo.owner,
              repo: context.repo.repo,
              issue_number: context.issue.number,
              labels: ['materials', 'pending']
            })
      
      - name: Label project check-ins
        if: contains(github.event.issue.title, '[DAY')
        uses: actions/github-script@v6
        with:
          script: |
            github.rest.issues.addLabels({
              owner: context.repo.owner,
              repo: context.repo.repo,
              issue_number: context.issue.number,
              labels: ['project-update']
            })
```

### Welcome Message Workflow

Create `.github/workflows/welcome.yml`:

```yaml
name: Welcome New Students

on:
  issues:
    types: [opened]
  pull_request:
    types: [opened]

jobs:
  welcome:
    runs-on: ubuntu-latest
    steps:
      - name: Welcome message
        uses: actions/first-interaction@v1
        with:
          repo-token: ${{ secrets.GITHUB_TOKEN }}
          issue-message: |
            👋 Welcome to Making More Makers!
            
            Thank you for creating your first issue. An instructor will review this and respond soon.
            
            While you wait:
            - Check out the [resources](../docs/resources.md)
            - Review the [course syllabus](../docs/syllabus.md)
            - Join discussions with classmates
            
            Happy making! 🚀
          pr-message: |
            🎉 Congratulations on your first pull request!
            
            An instructor will review your code and provide feedback.
            
            Keep up the great work! 💪
```

### Assignment Deadline Reminder

Create `.github/workflows/deadline-reminder.yml`:

```yaml
name: Assignment Deadline Reminders

on:
  schedule:
    # Run at 6 PM every day during course
    - cron: '0 18 * * *'

jobs:
  remind:
    runs-on: ubuntu-latest
    steps:
      - name: Check deadlines
        uses: actions/github-script@v6
        with:
          script: |
            const today = new Date().getDay();
            const messages = {
              1: '⏰ Reminder: Assignment 1 due tonight at 11:59 PM!',
              2: '⏰ Reminder: Assignment 2 (Project Proposal) due tonight!',
              3: '⏰ Reminder: Submit your Day 3 progress report!',
              4: '⏰ Reminder: Submit your Day 4 progress report!',
              5: '⏰ Reminder: Final Project due tonight! Last chance to submit!',
              6: '🎉 Presentation Day! Good luck everyone!'
            };
            
            if (messages[today]) {
              // Post announcement (requires discussions enabled)
              console.log(messages[today]);
            }
```

---

## 📈 Progress Tracking Dashboard

### Using GitHub Insights

**Repository Insights** provides:
- Commit activity
- Code frequency
- Contributors
- Network graph

**Project Insights** provides:
- Task completion rates
- Velocity charts
- Burndown charts

### Creating Custom Dashboard

Use GitHub's Projects (Beta) for advanced tracking:

1. **Create views:**
   - By team
   - By day
   - By status
   - By priority

2. **Use filters:**
   - `is:open label:urgent`
   - `is:closed label:assignment1`
   - `assignee:@me`

3. **Group by:**
   - Status
   - Team
   - Day
   - Assignment

---

## 🔔 Notification Management

### For Instructors

**Recommended settings:**
- Watch all student repositories
- Enable email notifications for:
  - Issues
  - Pull requests
  - Mentions
- Use filters to organize notifications

### For Students

**Recommended guidance:**
- Watch your team repository
- Enable notifications for:
  - Your issues
  - Mentions
  - Team discussions
- Use mobile app for urgent notifications

---

## 📝 Issue Templates Best Practices

### Template Tips

1. **Be specific** - Ask for exact information needed
2. **Use checkboxes** - Make it easy to fill out
3. **Provide examples** - Show what good looks like
4. **Keep it simple** - Don't overwhelm with too many fields
5. **Use sections** - Break into logical parts

### Template Maintenance

- Review templates after first few submissions
- Update based on common questions
- Add clarifications as needed
- Remove unused fields

---

## 🛠️ Additional Tools

### GitHub CLI

Install: https://cli.github.com/

**Useful commands:**
```bash
# View issues
gh issue list

# Create issue from template
gh issue create --template question.md

# View project
gh project list

# Add issue to project
gh project item-add PROJECT_NUMBER --owner ORG --url ISSUE_URL
```

### Browser Extensions

- **Octotree** - Code tree navigation
- **Enhanced GitHub** - Repository statistics
- **Refined GitHub** - UI improvements

---

<a name="chinese"></a>
## 📋 概览

本指南帮助教师为Making More Makers课程设置自动化、标签和项目管理工具。

---

## 🏷️ Issue标签

### 创建标签

导航到你的仓库 → Issues → Labels → New label

### 推荐的标签系统

#### 按类型
- `question` - 学生问题（🟦蓝色`#0075ca`）
- `project-update` - 每日进度报告（🟩绿色`#0e8a16`）
- `materials` - 材料申请（🟪紫色`#5319e7`）
- `bug` - 代码或硬件错误（🟥红色`#d73a4a`）
- `documentation` - 文档问题（📝 `#0075ca`）
- `enhancement` - 功能请求（✨ `#a2eeef`）

#### 按天
- `day1` - 第1天相关（🔴 `#ff0000`）
- `day2` - 第2天相关（🟠 `#ff8c00`）
- `day3` - 第3天相关（🟡 `#ffd700`）
- `day4` - 第4天相关（🟢 `#00ff00`）
- `day5` - 第5天相关（🔵 `#0000ff`）
- `day6` - 第6天相关（🟣 `#8b00ff`）

#### 按优先级
- `urgent` - 需要立即关注（🚨 `#b60205`）
- `high-priority` - 重要（⚠️ `#d93f0b`）
- `low-priority` - 可以等待（ℹ️ `#0e8a16`）

#### 按状态
- `pending` - 等待响应（⏳ `#fbca04`）
- `in-progress` - 正在处理（🔄 `#1d76db`）
- `resolved` - 问题已解决（✅ `#0e8a16`）
- `wontfix` - 将不会处理（❌ `#ffffff`）

#### 按作业
- `assignment1` - 与作业1相关
- `assignment2` - 与作业2相关
- `assignment3` - 与作业3相关
- `final-project` - 与最终项目相关

---

## 📊 GitHub Projects设置

### 创建项目看板

1. 转到你的组织或仓库
2. 点击"Projects" → "New project"
3. 选择模板："Team backlog"或"Board"
4. 名称："Making More Makers - 课程跟踪器"

### 推荐的看板列

#### 选项1：基于任务
- 📋 **Backlog** - 尚未开始的任务
- 🚧 **In Progress** - 当前正在处理
- 👀 **Review** - 等待教师审查
- ✅ **Done** - 已完成
- ❓ **Blocked** - 需要关注

#### 选项2：基于天
- **Day 1** - 第1天活动
- **Day 2** - 第2天活动
- **Day 3-4** - 开发冲刺
- **Day 5** - 完善
- **Day 6** - 演示

---

**Setup complete! Course management tools ready.** 🎓  
**设置完成！课程管理工具已就绪。** 🎓

