# Assignment Template Repositories
# 作业模板仓库映射文档

本文档记录主课程仓库中的assignments与GitHub Classroom模板仓库的映射关系。

This document records the mapping between assignments in the main course repository and GitHub Classroom template repositories.

---

## 📚 架构说明 | Architecture Overview

### 双仓库架构 | Dual Repository Architecture

```
主课程仓库 (Main Course Repo)
making-more-makers-classroom-6d7919/
├── assignments/               ← 教师参考和编辑 (Teacher reference)
│   ├── day1-morning-intro/
│   ├── day1-afternoon-hardware-ctf/
│   ├── assignment-day2-blog/
│   └── day2-afternoon-project-proposal/
├── daily-materials/          ← 教学材料
├── docs/                     ← 课程文档
└── scripts/                  ← 自动化脚本

                    ↓ 复制 (Copy)

独立模板仓库 (Independent Template Repos)
Making-More-Makers/
├── mmm-day1-morning-intro/        ← GitHub Classroom模板
├── mmm-day1-afternoon-ctf/        ← GitHub Classroom模板  
├── mmm-day2-morning-blog/         ← GitHub Classroom模板
└── mmm-day2-afternoon-proposal/   ← GitHub Classroom模板
```

### 为什么使用这种架构？ | Why This Architecture?

✅ **主仓库保留所有内容** - 教师可以统一管理和更新  
✅ **模板仓库独立存在** - 符合GitHub Classroom要求  
✅ **学生只看到当前作业** - 更好的权限控制  
✅ **便于版本管理** - 每个模板可独立更新  

✅ **Main repo keeps everything** - Teachers can manage and update centrally  
✅ **Template repos are independent** - Meets GitHub Classroom requirements  
✅ **Students see only current assignment** - Better permission control  
✅ **Easy version management** - Each template can be updated independently  

---

## 🗺️ 模板仓库映射表 | Template Repository Mapping

| Assignment | 主仓库路径<br>Main Repo Path | 模板仓库<br>Template Repo | 分数<br>Points | 类型<br>Type |
|------------|---------------------------|-------------------------|-------------|-------------|
| **Day 1 Morning: Maker Intro** | `assignments/day1-morning-intro/` | [mmm-day1-morning-intro](https://github.com/Making-More-Makers/mmm-day1-morning-intro) | Pass/Fail | Individual |
| **Day 1 Afternoon: Hardware CTF** | `assignments/day1-afternoon-hardware-ctf/` | [mmm-day1-afternoon-ctf](https://github.com/Making-More-Makers/mmm-day1-afternoon-ctf) | 40 points | Individual |
| **Day 2 Morning: Blog** | `assignments/assignment-day2-blog/` | [mmm-day2-morning-blog](https://github.com/Making-More-Makers/mmm-day2-morning-blog) | 10 points | Individual |
| **Day 2 Afternoon: Proposal** | `assignments/day2-afternoon-project-proposal/` | [mmm-day2-afternoon-proposal](https://github.com/Making-More-Makers/mmm-day2-afternoon-proposal) | 15 points | Group (3-4) |

---

## 🚀 创建模板仓库 | Creating Template Repositories

### 使用自动化脚本 | Using Automation Script

我们提供了自动化脚本来创建所有模板仓库：

We provide an automation script to create all template repositories:

```bash
# 1. 进入仓库根目录
cd making-more-makers-classroom-6d7919-learn-to-git-github-starter-course

# 2. 运行脚本（需要Git Bash或WSL）
bash scripts/create-template-repos.sh
```

脚本会：
The script will:

1. ✅ 为每个assignment创建临时Git仓库
2. ✅ 复制assignment内容
3. ✅ 添加模板仓库标识
4. ✅ 创建.gitignore文件
5. ✅ 准备推送命令

### 手动创建步骤 | Manual Creation Steps

如果需要手动创建某个模板仓库：

If you need to manually create a template repository:

```bash
# 示例：创建 day1-morning-intro 模板

# 1. 创建临时目录
mkdir -p ~/temp/mmm-day1-morning-intro
cd ~/temp/mmm-day1-morning-intro

# 2. 初始化Git
git init
git branch -M main

# 3. 复制assignment内容
cp -r /path/to/main-repo/assignments/day1-morning-intro/* .

# 4. 添加模板说明到README顶部
# (在README.md开头添加模板仓库标识)

# 5. 在GitHub创建空仓库
# 访问: https://github.com/organizations/Making-More-Makers/repositories/new
# 名称: mmm-day1-morning-intro
# ☑️ 勾选 "Template repository"

# 6. 提交并推送
git add .
git commit -m "Initial template: Day 1 Morning Introduction"
git remote add origin git@github.com:Making-More-Makers/mmm-day1-morning-intro.git
git push -u origin main
```

---

## 🔄 更新同步流程 | Update Synchronization Workflow

### 工作流程 | Workflow

```
1. 教师在主仓库编辑 → 2. 复制到模板仓库 → 3. 推送更新
   Edit in main repo → Copy to template → Push updates
```

### 更新步骤 | Update Steps

#### 方法1：手动同步 | Method 1: Manual Sync

```bash
# 1. 在主仓库编辑assignment
cd making-more-makers-classroom-6d7919/assignments/day1-morning-intro/
# 修改文件...

# 2. 提交到主仓库
git add .
git commit -m "Update: [描述更改]"
git push origin main

# 3. 同步到模板仓库
cd ~/path/to/mmm-day1-morning-intro/
cp -r ../main-repo/assignments/day1-morning-intro/* .
git add .
git commit -m "Sync from main repo: [描述更改]"
git push origin main
```

#### 方法2：使用同步脚本（未来功能）| Method 2: Use Sync Script (Future)

```bash
# 计划中的功能
./scripts/sync-to-template.sh day1-morning-intro
```

### ⚠️ 重要提示 | Important Notes

- **模板更新不会自动影响学生仓库**  
  Template updates don't automatically affect student repos

- **建议在assignment创建前确保模板完整**  
  Ensure templates are complete before creating assignments

- **可以为特定批次学生创建分支**  
  Can create branches for specific student cohorts

---

## 🎓 在GitHub Classroom中使用 | Using in GitHub Classroom

### 创建作业 | Creating Assignments

访问 GitHub Classroom: https://classroom.github.com/

1. **选择课堂** → Making More Makers 2024
2. **新建作业** → New assignment
3. **配置**:
   ```yaml
   名称: Day 1 Morning - Maker Introduction
   类型: Individual / Group
   截止日期: [设置日期]
   
   起始代码:
     ☑️ Add a template repository
     选择: Making-More-Makers/mmm-day1-morning-intro
   
   仓库设置:
     可见性: Private (推荐)
     学生权限: Write
   
   评分:
     总分: [从映射表获取]
   ```

4. **复制邀请链接** 分享给学生

### 配置示例 | Configuration Examples

#### 个人作业 | Individual Assignment

```yaml
Day 1 Morning - Maker Introduction:
  Type: Individual
  Template: mmm-day1-morning-intro
  Points: Pass/Fail
  Deadline: Day 1, 23:59
  
Day 1 Afternoon - Hardware CTF:
  Type: Individual
  Template: mmm-day1-afternoon-ctf
  Points: 40
  Deadline: Day 1, 23:59
```

#### 团队作业 | Group Assignment

```yaml
Day 2 Afternoon - Project Proposal:
  Type: Group
  Template: mmm-day2-afternoon-proposal
  Max team size: 4
  Points: 15
  Deadline: Day 2, 23:59
  Students can create teams: Yes
```

---

## 👥 给学生的说明 | Instructions for Students

### 接受作业 | Accepting Assignments

1. 点击讲师分享的邀请链接
2. 登录GitHub账号
3. 点击"Accept this assignment"
4. 等待仓库创建（30-60秒）
5. 克隆你的个人作业仓库

### 完成并提交 | Completing and Submitting

```bash
# 克隆
git clone [你的作业仓库URL]

# 完成作业
# 按照README.md说明操作

# 提交
git add .
git commit -m "Complete assignment"
git push origin main

# 在GitHub创建issue说明完成情况
```

---

## 🛠️ 维护和管理 | Maintenance and Management

### 定期检查 | Regular Checks

- [ ] 模板仓库是否标记为"Template repository"
- [ ] README中的模板说明是否清晰
- [ ] .gitignore文件是否适当
- [ ] 所有必需文件是否包含
- [ ] 链接是否有效

### 版本管理 | Version Management

考虑为不同学期创建分支：

Consider creating branches for different semesters:

```bash
# 例如：2024春季版本
git checkout -b spring-2024
# 做出特定调整
git push origin spring-2024

# GitHub Classroom可以选择特定分支作为模板
```

---

## 📊 统计信息 | Statistics

| 类型<br>Type | 数量<br>Count | 总分<br>Total Points |
|-------------|-------------|-------------------|
| Individual | 3 | 50 points |
| Group | 1 | 15 points |
| **Total** | **4** | **65 points** |

---

## 📞 获取帮助 | Getting Help

- **GitHub Classroom文档**: https://docs.github.com/en/education/manage-coursework-with-github-classroom
- **主课程仓库**: https://github.com/Making-More-Makers/making-more-makers-classroom-6d7919-learn-to-git-github-starter-course
- **Issue模板**: 使用`.github/ISSUE_TEMPLATE/`

---

**Last Updated**: 2024-11-20  
**Maintained By**: Making More Makers Teaching Team
