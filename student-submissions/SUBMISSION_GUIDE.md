# Student Submission Workflow
# 学生提交工作流

[English](#english) | [中文](#chinese)

---

<a name="english"></a>
## 📋 Overview

This document outlines the standardized workflow for submitting assignments, tracking progress, and managing your project throughout the course.

---

## 🗂️ Repository Structure

### Individual Assignments (Assignment 1)

```
your-assignment-repo/
├── README.md                  # Project documentation
├── main.ino                   # Arduino sketch
├── circuit-diagram.png        # Circuit documentation
├── photos/                    # Project photos
│   ├── overview.jpg
│   └── closeup.jpg
└── docs/                      # Additional documentation (optional)
    └── notes.md
```

### Team Projects (Assignment 2, Final Project)

```
team-project-repo/
├── README.md                  # Main project documentation
├── src/                       # Source code
│   ├── main.ino
│   ├── sensors.ino
│   └── actuators.ino
├── docs/                      # Documentation
│   ├── requirements.md
│   ├── materials.md
│   ├── timeline.md
│   └── setup-guide.md
├── sketches/                  # Design sketches
│   ├── concept.jpg
│   ├── circuit-diagram.png
│   └── enclosure-design.stl
├── photos/                    # Project photos
│   └── progress/
│       ├── day3/
│       ├── day4/
│       └── day5/
├── demo/                      # Demo materials
│   ├── demo-video.mp4
│   └── presentation.pdf
└── .gitignore                 # Git ignore file
```

---

## 🔄 Git Workflow

### Initial Setup

1. **Accept Assignment**
   ```bash
   # Click the GitHub Classroom invitation link
   # Repository will be created automatically
   ```

2. **Clone Repository**
   ```bash
   git clone https://github.com/your-org/assignment-yourname.git
   cd assignment-yourname
   ```

3. **Configure Git (if not done)**
   ```bash
   git config user.name "Your Name"
   git config user.email "your.email@example.com"
   ```

### Daily Workflow

1. **Pull Latest Changes** (for team projects)
   ```bash
   git pull origin main
   ```

2. **Make Changes**
   - Edit files
   - Add new files
   - Test your work

3. **Check Status**
   ```bash
   git status
   ```

4. **Stage Changes**
   ```bash
   # Stage specific files
   git add README.md
   git add src/main.ino
   
   # Or stage all changes
   git add .
   ```

5. **Commit with Message**
   ```bash
   git commit -m "Add temperature sensor reading function"
   ```

6. **Push to GitHub**
   ```bash
   git push origin main
   ```

### Commit Message Guidelines

**Good Examples:**
- ✅ `Add LED brightness control with potentiometer`
- ✅ `Fix servo angle calculation bug`
- ✅ `Update README with setup instructions`
- ✅ `Add circuit diagram and photos`

**Bad Examples:**
- ❌ `update`
- ❌ `fix`
- ❌ `changes`
- ❌ `asdf`

**Format:**
- Use present tense ("Add feature" not "Added feature")
- Be descriptive but concise
- Explain what and why, not how

---

## 📝 Assignment Submission Process

### Assignment 1: Arduino Basics

**Deadline**: End of Day 1, 11:59 PM

**Checklist**:
- [ ] Code uploaded (`main.ino`)
- [ ] README.md complete
- [ ] Circuit diagram included
- [ ] Photos of physical circuit (2+)
- [ ] Code compiles and runs
- [ ] All files committed and pushed

**Verification**:
1. Visit your GitHub repository
2. Verify all files are present
3. Click on files to ensure content is correct
4. Check commit history

---

### Assignment 2: Project Proposal

**Deadline**: End of Day 2, 11:59 PM

**Checklist**:
- [ ] README.md with overview
- [ ] requirements.md
- [ ] materials.md
- [ ] timeline.md
- [ ] sketches/ folder with concepts
- [ ] All team members contributed
- [ ] Materials request issue created

**Submission**:
1. Complete all documents
2. Commit and push to team repository
3. Create "Materials Request" issue
4. Wait for instructor approval

---

### Assignment 3: Progress Reports

**Deadline**: End of Day 3 AND Day 4

**Submission Method**: GitHub Issues

**Steps**:
1. Go to your team repository
2. Click "Issues" → "New Issue"
3. Select "Project Check-in" template
4. Fill in all sections:
   - Progress summary
   - Photos of work
   - Challenges and solutions
   - Next steps
   - Link to code commits
5. Submit issue
6. Instructors will review and comment

---

### Final Project

**Deadline**: End of Day 5, 11:59 PM  
**Presentation**: Day 6

**Checklist**:
- [ ] Complete code in `src/` folder
- [ ] Comprehensive README.md
- [ ] Circuit diagrams
- [ ] Bill of materials
- [ ] Setup and usage instructions
- [ ] Photos of final project
- [ ] Demo video (2-3 minutes)
- [ ] GitHub Pages deployed
- [ ] Presentation prepared
- [ ] Project tested and working

**Final Submission Steps**:
1. **Code Submission**
   ```bash
   git add .
   git commit -m "Final project submission"
   git push origin main
   ```

2. **GitHub Pages**
   - Enable in repository Settings → Pages
   - Select branch and folder
   - Verify site is live

3. **Demo Video**
   - Upload to repository or YouTube
   - Link in README
   - Embed in GitHub Pages

4. **Documentation Review**
   - Check all links work
   - Verify images load
   - Test instructions

---

## 🤝 Team Collaboration

### Communication

**Use GitHub for all project communication:**

1. **Issues** - Questions, problems, discussions
2. **Comments** - Code reviews, suggestions
3. **Projects Board** - Task tracking (optional)

### Task Management

**Assign tasks clearly:**
- Use GitHub Projects or issues
- Tag team members (@username)
- Set deadlines
- Update status regularly

### Code Review

**Before merging significant changes:**
1. Team member reviews code
2. Test functionality
3. Check documentation
4. Approve or request changes

### Conflict Resolution

**If merge conflicts occur:**
1. Communicate with team
2. Pull latest changes
3. Resolve conflicts locally
4. Test thoroughly
5. Commit and push

---

## 🐛 Troubleshooting Common Issues

### "Permission denied (publickey)"

**Solution**: Set up SSH key or use HTTPS
```bash
# Switch to HTTPS
git remote set-url origin https://github.com/your-org/repo.git
```

### "Your branch is behind"

**Solution**: Pull before pushing
```bash
git pull origin main
git push origin main
```

### "Merge conflict"

**Solution**: Resolve conflicts manually
1. Open conflicted files
2. Look for `<<<<<<<`, `=======`, `>>>>>>>`
3. Choose which changes to keep
4. Remove conflict markers
5. Commit resolved changes

### "Large files"

**Solution**: Use Git LFS or compress files
- GitHub has 100MB file size limit
- Compress videos and images
- Use external hosting for large files

---

## 📊 Progress Tracking

### View Your Progress

1. **GitHub Repository**
   - Commit history
   - File changes
   - Contributors graph

2. **Issues**
   - Open issues = pending tasks
   - Closed issues = completed work
   - Comments = discussion history

3. **Projects Board** (if used)
   - Kanban-style task tracking
   - Visual progress overview

---

## ✅ Best Practices

### Do:
- ✅ Commit frequently (multiple times per day)
- ✅ Write meaningful commit messages
- ✅ Pull before starting work (team projects)
- ✅ Test before committing
- ✅ Document as you go
- ✅ Back up your work (Git is your backup!)

### Don't:
- ❌ Commit broken code
- ❌ Use vague commit messages
- ❌ Wait until deadline to commit
- ❌ Commit sensitive information (passwords, API keys)
- ❌ Work without pulling first (team projects)
- ❌ Ignore merge conflicts

---

<a name="chinese"></a>
## 📋 概览

本文档概述了在整个课程中提交作业、跟踪进度和管理项目的标准化工作流程。

---

## 🗂️ 仓库结构

### 个人作业（作业1）

```
your-assignment-repo/
├── README.md                  # 项目文档
├── main.ino                   # Arduino程序
├── circuit-diagram.png        # 电路文档
├── photos/                    # 项目照片
│   ├── overview.jpg
│   └── closeup.jpg
└── docs/                      # 附加文档（可选）
    └── notes.md
```

### 团队项目（作业2，最终项目）

```
team-project-repo/
├── README.md                  # 主项目文档
├── src/                       # 源代码
│   ├── main.ino
│   ├── sensors.ino
│   └── actuators.ino
├── docs/                      # 文档
│   ├── requirements.md
│   ├── materials.md
│   ├── timeline.md
│   └── setup-guide.md
├── sketches/                  # 设计草图
│   ├── concept.jpg
│   ├── circuit-diagram.png
│   └── enclosure-design.stl
├── photos/                    # 项目照片
│   └── progress/
│       ├── day3/
│       ├── day4/
│       └── day5/
├── demo/                      # 演示材料
│   ├── demo-video.mp4
│   └── presentation.pdf
└── .gitignore                 # Git忽略文件
```

---

## 🔄 Git工作流程

### 初始设置

1. **接受作业**
   ```bash
   # 点击GitHub Classroom邀请链接
   # 仓库将自动创建
   ```

2. **克隆仓库**
   ```bash
   git clone https://github.com/your-org/assignment-yourname.git
   cd assignment-yourname
   ```

3. **配置Git（如果未完成）**
   ```bash
   git config user.name "Your Name"
   git config user.email "your.email@example.com"
   ```

### 每日工作流程

1. **拉取最新更改**（团队项目）
   ```bash
   git pull origin main
   ```

2. **进行更改**
   - 编辑文件
   - 添加新文件
   - 测试你的工作

3. **检查状态**
   ```bash
   git status
   ```

4. **暂存更改**
   ```bash
   # 暂存特定文件
   git add README.md
   git add src/main.ino
   
   # 或暂存所有更改
   git add .
   ```

5. **提交并附加消息**
   ```bash
   git commit -m "添加温度传感器读取功能"
   ```

6. **推送到GitHub**
   ```bash
   git push origin main
   ```

### 提交消息指南

**好的例子：**
- ✅ `添加使用电位器的LED亮度控制`
- ✅ `修复舵机角度计算错误`
- ✅ `更新README添加设置说明`
- ✅ `添加电路图和照片`

**坏的例子：**
- ❌ `更新`
- ❌ `修复`
- ❌ `更改`
- ❌ `asdf`

**格式：**
- 使用现在时（"添加功能"而不是"已添加功能"）
- 描述性但简洁
- 解释什么和为什么，而不是如何

---

## 📝 作业提交流程

### 作业1：Arduino基础

**截止时间**：第1天结束，晚上11:59

**检查清单**：
- [ ] 代码已上传（`main.ino`）
- [ ] README.md完成
- [ ] 包含电路图
- [ ] 物理电路照片（2张以上）
- [ ] 代码编译并运行
- [ ] 所有文件已提交并推送

**验证**：
1. 访问你的GitHub仓库
2. 验证所有文件都存在
3. 点击文件确保内容正确
4. 检查提交历史

---

### 作业2：项目提案

**截止时间**：第2天结束，晚上11:59

**检查清单**：
- [ ] 带概览的README.md
- [ ] requirements.md
- [ ] materials.md
- [ ] timeline.md
- [ ] 带概念的sketches/文件夹
- [ ] 所有团队成员都有贡献
- [ ] 创建了材料申请issue

**提交**：
1. 完成所有文档
2. 提交并推送到团队仓库
3. 创建"材料申请"issue
4. 等待教师批准

---

### 作业3：进度报告

**截止时间**：第3天和第4天结束

**提交方法**：GitHub Issues

**步骤**：
1. 转到你的团队仓库
2. 点击"Issues" → "New Issue"
3. 选择"Project Check-in"模板
4. 填写所有部分：
   - 进度摘要
   - 工作照片
   - 挑战和解决方案
   - 下一步
   - 代码提交链接
5. 提交issue
6. 教师将审查并评论

---

### 最终项目

**截止时间**：第5天结束，晚上11:59  
**演示**：第6天

**检查清单**：
- [ ] `src/`文件夹中的完整代码
- [ ] 全面的README.md
- [ ] 电路图
- [ ] 物料清单
- [ ] 设置和使用说明
- [ ] 最终项目照片
- [ ] 演示视频（2-3分钟）
- [ ] GitHub Pages已部署
- [ ] 演示已准备
- [ ] 项目已测试并工作

**最终提交步骤**：
1. **代码提交**
   ```bash
   git add .
   git commit -m "最终项目提交"
   git push origin main
   ```

2. **GitHub Pages**
   - 在仓库设置 → Pages中启用
   - 选择分支和文件夹
   - 验证网站已上线

3. **演示视频**
   - 上传到仓库或YouTube
   - 在README中链接
   - 嵌入GitHub Pages

4. **文档审查**
   - 检查所有链接工作
   - 验证图片加载
   - 测试说明

---

## 🤝 团队协作

### 沟通

**使用GitHub进行所有项目沟通：**

1. **Issues** - 问题、难题、讨论
2. **Comments** - 代码审查、建议
3. **Projects Board** - 任务跟踪（可选）

### 任务管理

**明确分配任务：**
- 使用GitHub Projects或issues
- 标记团队成员（@用户名）
- 设置截止日期
- 定期更新状态

### 代码审查

**在合并重大更改之前：**
1. 团队成员审查代码
2. 测试功能
3. 检查文档
4. 批准或请求更改

### 冲突解决

**如果发生合并冲突：**
1. 与团队沟通
2. 拉取最新更改
3. 本地解决冲突
4. 彻底测试
5. 提交并推送

---

## ✅ 最佳实践

### 做：
- ✅ 频繁提交（每天多次）
- ✅ 编写有意义的提交消息
- ✅ 开始工作前拉取（团队项目）
- ✅ 提交前测试
- ✅ 边做边文档
- ✅ 备份你的工作（Git就是你的备份！）

### 不要：
- ❌ 提交损坏的代码
- ❌ 使用模糊的提交消息
- ❌ 等到截止日期才提交
- ❌ 提交敏感信息（密码、API密钥）
- ❌ 不先拉取就工作（团队项目）
- ❌ 忽略合并冲突

---

**Follow the workflow, succeed in the course!** 🎯  
**遵循工作流程，在课程中取得成功！** 🎯

