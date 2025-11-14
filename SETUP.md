# GitHub Classroom Setup Guide | GitHub Classroom 配置指南

[English](#english) | [中文](#chinese)

---

<a name="english"></a>
## 📋 Table of Contents

1. [Prerequisites](#prerequisites)
2. [GitHub Organization Setup](#github-organization-setup)
3. [GitHub Classroom Creation](#github-classroom-creation)
4. [Assignment Repository Setup](#assignment-repository-setup)
5. [Student Invitation Process](#student-invitation-process)
6. [GitHub Projects Configuration](#github-projects-configuration)
7. [Permissions and Access Control](#permissions-and-access-control)
8. [Automated Grading (Optional)](#automated-grading-optional)
9. [Troubleshooting](#troubleshooting)

---

## Prerequisites

Before setting up GitHub Classroom, ensure you have:

- [ ] A GitHub account with appropriate permissions
- [ ] GitHub Education benefits (recommended for private repos)
- [ ] List of student GitHub usernames or email addresses
- [ ] Course materials prepared in this repository

## GitHub Organization Setup

### Step 1: Create a GitHub Organization

1. Go to https://github.com/organizations/new
2. Choose a descriptive organization name (e.g., `making-more-makers-2024`)
3. Select account type:
   - **Free**: Public repositories only
   - **Education**: Free private repositories with GitHub Education benefits
4. Add organization email and verify

### Step 2: Apply for GitHub Education Benefits

1. Visit https://education.github.com/benefits
2. Click "Get benefits" and select "Teacher"
3. Fill in your institutional email and course details
4. Wait for approval (usually 1-3 business days)

### Step 3: Configure Organization Settings

1. Navigate to Organization → Settings
2. **Member Privileges**:
   - Set base permissions to "Read"
   - Enable "Allow members to create repositories"
3. **Third-party Access**:
   - Enable GitHub Classroom application
4. **Pages**:
   - Enable GitHub Pages for the organization

## GitHub Classroom Creation

### Step 1: Access GitHub Classroom

1. Go to https://classroom.github.com/
2. Sign in with your GitHub account
3. Click "New classroom"

### Step 2: Configure Classroom

1. **Select Organization**: Choose the organization created earlier
2. **Classroom Name**: `Making More Makers 2024` (or your preferred name)
3. **School Name**: Your institution name
4. **Administrators**: Add co-instructors/TAs
5. Click "Create classroom"

### Step 3: Import Student Roster

**Option A: Manual Entry**
1. In classroom, go to "Students" tab
2. Click "Add students"
3. Enter GitHub usernames or emails

**Option B: CSV Import**
1. Prepare CSV file with columns: `identifier,github_username,name`
   ```csv
   identifier,github_username,name
   student001,john_doe,John Doe
   student002,jane_smith,Jane Smith
   ```
2. Upload via "Import from CSV" button

## Assignment Repository Setup

### Creating Individual Assignments

For individual assignments (e.g., Arduino basics):

1. In classroom, click "New assignment"
2. **Assignment basics**:
   - Title: `Assignment 1: Arduino Basics`
   - Deadline: Set appropriate date and time
   - Type: Individual
3. **Starter code**:
   - Select "Import starter code from a repository"
   - Repository: `your-org/assignment1-arduino-basics`
4. **Supported editors** (optional):
   - Enable online IDE if needed
5. **Grading**:
   - Add assignment points/max score
6. **Invite link**:
   - Copy invitation link for students

### Creating Group Assignments

For team projects (e.g., Final Project):

1. Click "New assignment"
2. **Assignment basics**:
   - Title: `Final Project`
   - Type: **Group assignment**
   - Max team size: 3-4 students
   - Max teams: Calculate based on class size
3. **Starter code**: Link to `assignments/final-project` template
4. **Admin access**: Enable repo admin access for teams
5. Generate invitation link

### Assignment Templates Structure

Each assignment in this repository follows this structure:

```
assignments/
└── assignment1-arduino-basics/
    ├── README.md              # Assignment instructions (bilingual)
    ├── rubric.md             # Grading rubric
    ├── submission-guide.md   # Submission instructions
    └── template/             # Starter code/files
        ├── sketch.ino
        ├── requirements.txt
        └── docs/
```

**To use as starter code:**
1. Create a new repository in your organization
2. Push the assignment template contents
3. Reference this repository when creating the classroom assignment

## Student Invitation Process

### Distributing Invitation Links

**Method 1: Direct Link Sharing**
1. Copy invitation link from classroom
2. Share via:
   - Course management system (LMS)
   - Email
   - Class messaging platform
   - QR code (for in-person classes)

**Method 2: Classroom Portal**
1. Share main classroom URL: `https://classroom.github.com/classrooms/YOUR_ID`
2. Students can view all available assignments

### Student Acceptance Process

Students should:
1. Click invitation link
2. Sign in to GitHub (or create account)
3. Accept the assignment
4. Wait for repository creation (30-60 seconds)
5. Clone repository and begin work

### Monitoring Acceptances

1. In classroom dashboard, view "Assignments" tab
2. Check acceptance status for each student
3. Follow up with students who haven't accepted

## GitHub Projects Configuration

Use GitHub Projects for visual progress tracking.

### Step 1: Create Project Board

1. Go to Organization → Projects → "New project"
2. Select template: "Team backlog" or "Kanban"
3. Name: `Making More Makers - Course Progress`

### Step 2: Configure Board Columns

Create columns:
- **📋 To Do**: Upcoming assignments
- **🚧 In Progress**: Current work
- **👀 Review**: Submitted, pending review
- **✅ Complete**: Graded and approved
- **❓ Questions**: Issues needing attention

### Step 3: Automation Rules

Set up automation:
- Move cards when issue is assigned → In Progress
- Move cards when PR is merged → Complete
- Add labels for priority and day tracking

### Step 4: Link Issues and PRs

- Enable automatic linking of issues/PRs to project
- Create project views filtered by:
  - Day (day1, day2, etc.)
  - Type (assignment, question, materials)
  - Team/student

## Permissions and Access Control

### Repository Permissions

**Template Repositories**:
- Instructors: Admin
- Students: Read (until they accept assignment)

**Student Assignment Repos**:
- Student/Team: Write
- Instructors/TAs: Admin
- Other students: None

### Organization Roles

- **Owner**: Lead instructor(s)
- **Member**: Teaching assistants
- **Outside Collaborator**: Guest lecturers (if any)

### Protecting Important Branches

For template repos:
1. Settings → Branches → "Add rule"
2. Branch name pattern: `main`
3. Enable:
   - Require pull request reviews
   - Restrict who can push

## Automated Grading (Optional)

### Using GitHub Actions for Auto-Grading

**For code assignments**, you can set up automated tests:

1. Create `.github/workflows/classroom.yml` in template repo:

```yaml
name: GitHub Classroom Workflow

on: [push]

jobs:
  build:
    name: Autograding
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - uses: education/autograding@v1
```

2. In classroom assignment settings:
   - Enable autograding
   - Add test cases (e.g., unit tests for Arduino code)
   - Assign points per test

### Manual Grading Workflow

For hardware projects and documentation:

1. Students submit via:
   - Push code to repository
   - Create issue with "Project Submission" template
   - Link to demo video/GitHub Pages
2. Instructors review:
   - Check repository commits
   - Review documentation
   - Test hardware (if applicable)
   - Use rubric from `assignments/*/rubric.md`
3. Provide feedback:
   - Comment on commits/PRs
   - Create review issues
   - Update grades in LMS

## Troubleshooting

### Common Issues

**Issue: Student can't accept assignment**
- Solution: Verify student has GitHub account and is signed in
- Ensure invitation link is correct and not expired

**Issue: Repository not created after acceptance**
- Solution: Wait 2-3 minutes, refresh page
- Check organization's repository limit

**Issue: Student can't push to repository**
- Solution: Verify repository permissions
- Check if student is using correct remote URL

**Issue: Organization hitting repository limit**
- Solution: Apply for GitHub Education benefits
- Archive old assignment repositories

**Issue: Merge conflicts in student repos**
- Solution: Provide Git training (see Day 2 materials)
- Create troubleshooting guide for common Git issues

### Getting Help

- GitHub Classroom Documentation: https://docs.github.com/en/education/manage-coursework-with-github-classroom
- GitHub Education Community: https://education.github.community/
- Contact GitHub Education Support: education@github.com

---

<a name="chinese"></a>
## 📋 目录

1. [前置条件](#前置条件)
2. [GitHub组织设置](#github组织设置)
3. [GitHub Classroom创建](#github-classroom创建)
4. [作业仓库设置](#作业仓库设置)
5. [学生邀请流程](#学生邀请流程)
6. [GitHub Projects配置](#github-projects配置)
7. [权限和访问控制](#权限和访问控制)
8. [自动评分（可选）](#自动评分可选)
9. [故障排除](#故障排除)

---

## 前置条件

在设置GitHub Classroom之前，确保你有：

- [ ] 具有适当权限的GitHub账户
- [ ] GitHub教育福利（推荐用于私有仓库）
- [ ] 学生的GitHub用户名或电子邮件列表
- [ ] 本仓库中准备好的课程材料

## GitHub组织设置

### 步骤1：创建GitHub组织

1. 访问 https://github.com/organizations/new
2. 选择描述性的组织名称（例如：`making-more-makers-2024`）
3. 选择账户类型：
   - **免费版**：仅公共仓库
   - **教育版**：通过GitHub教育福利获得免费私有仓库
4. 添加组织邮箱并验证

### 步骤2：申请GitHub教育福利

1. 访问 https://education.github.com/benefits
2. 点击"获取福利"并选择"教师"
3. 填写机构邮箱和课程详情
4. 等待批准（通常1-3个工作日）

### 步骤3：配置组织设置

1. 导航到组织 → 设置
2. **成员权限**：
   - 设置基础权限为"读取"
   - 启用"允许成员创建仓库"
3. **第三方访问**：
   - 启用GitHub Classroom应用
4. **Pages**：
   - 为组织启用GitHub Pages

## GitHub Classroom创建

### 步骤1：访问GitHub Classroom

1. 访问 https://classroom.github.com/
2. 使用GitHub账户登录
3. 点击"新建课堂"

### 步骤2：配置课堂

1. **选择组织**：选择之前创建的组织
2. **课堂名称**：`Making More Makers 2024`（或你喜欢的名称）
3. **学校名称**：你的机构名称
4. **管理员**：添加协同教师/助教
5. 点击"创建课堂"

### 步骤3：导入学生名单

**选项A：手动输入**
1. 在课堂中，转到"学生"标签
2. 点击"添加学生"
3. 输入GitHub用户名或邮箱

**选项B：CSV导入**
1. 准备CSV文件，列名：`identifier,github_username,name`
   ```csv
   identifier,github_username,name
   student001,john_doe,张三
   student002,jane_smith,李四
   ```
2. 通过"从CSV导入"按钮上传

## 作业仓库设置

### 创建个人作业

对于个人作业（例如：Arduino基础）：

1. 在课堂中，点击"新建作业"
2. **作业基础信息**：
   - 标题：`作业1：Arduino基础`
   - 截止日期：设置适当的日期和时间
   - 类型：个人
3. **起始代码**：
   - 选择"从仓库导入起始代码"
   - 仓库：`your-org/assignment1-arduino-basics`
4. **支持的编辑器**（可选）：
   - 如需要可启用在线IDE
5. **评分**：
   - 添加作业分数/最高分
6. **邀请链接**：
   - 复制学生邀请链接

### 创建团队作业

对于团队项目（例如：最终项目）：

1. 点击"新建作业"
2. **作业基础信息**：
   - 标题：`最终项目`
   - 类型：**团队作业**
   - 最大团队规模：3-4名学生
   - 最大团队数：根据班级规模计算
3. **起始代码**：链接到 `assignments/final-project` 模板
4. **管理员访问**：为团队启用仓库管理员访问权限
5. 生成邀请链接

### 作业模板结构

本仓库中的每个作业遵循此结构：

```
assignments/
└── assignment1-arduino-basics/
    ├── README.md              # 作业说明（双语）
    ├── rubric.md             # 评分标准
    ├── submission-guide.md   # 提交说明
    └── template/             # 起始代码/文件
        ├── sketch.ino
        ├── requirements.txt
        └── docs/
```

**作为起始代码使用：**
1. 在你的组织中创建新仓库
2. 推送作业模板内容
3. 创建课堂作业时引用此仓库

## 学生邀请流程

### 分发邀请链接

**方法1：直接链接分享**
1. 从课堂复制邀请链接
2. 通过以下方式分享：
   - 课程管理系统（LMS）
   - 电子邮件
   - 班级消息平台
   - 二维码（用于线下课堂）

**方法2：课堂门户**
1. 分享主课堂URL：`https://classroom.github.com/classrooms/YOUR_ID`
2. 学生可以查看所有可用作业

### 学生接受流程

学生应该：
1. 点击邀请链接
2. 登录GitHub（或创建账户）
3. 接受作业
4. 等待仓库创建（30-60秒）
5. 克隆仓库并开始工作

### 监控接受情况

1. 在课堂仪表板中，查看"作业"标签
2. 检查每个学生的接受状态
3. 跟进未接受的学生

## GitHub Projects配置

使用GitHub Projects进行可视化进度跟踪。

### 步骤1：创建项目看板

1. 转到组织 → 项目 → "新建项目"
2. 选择模板："团队待办事项"或"看板"
3. 名称：`Making More Makers - 课程进度`

### 步骤2：配置看板列

创建列：
- **📋 待办**：即将到来的作业
- **🚧 进行中**：当前工作
- **👀 审查中**：已提交，待审查
- **✅ 完成**：已评分和批准
- **❓ 问题**：需要关注的问题

### 步骤3：自动化规则

设置自动化：
- 当issue被分配时移动卡片 → 进行中
- 当PR被合并时移动卡片 → 完成
- 添加标签用于优先级和日期跟踪

### 步骤4：链接Issues和PRs

- 启用issues/PRs自动链接到项目
- 创建按以下条件过滤的项目视图：
  - 日期（day1、day2等）
  - 类型（作业、问题、材料）
  - 团队/学生

## 权限和访问控制

### 仓库权限

**模板仓库**：
- 教师：管理员
- 学生：读取（直到他们接受作业）

**学生作业仓库**：
- 学生/团队：写入
- 教师/助教：管理员
- 其他学生：无

### 组织角色

- **所有者**：主讲教师
- **成员**：助教
- **外部协作者**：客座讲师（如有）

### 保护重要分支

对于模板仓库：
1. 设置 → 分支 → "添加规则"
2. 分支名称模式：`main`
3. 启用：
   - 需要拉取请求审查
   - 限制谁可以推送

## 自动评分（可选）

### 使用GitHub Actions进行自动评分

**对于代码作业**，你可以设置自动化测试：

1. 在模板仓库中创建 `.github/workflows/classroom.yml`：

```yaml
name: GitHub Classroom Workflow

on: [push]

jobs:
  build:
    name: Autograding
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v2
      - uses: education/autograding@v1
```

2. 在课堂作业设置中：
   - 启用自动评分
   - 添加测试用例（例如：Arduino代码的单元测试）
   - 为每个测试分配分数

### 手动评分工作流

对于硬件项目和文档：

1. 学生通过以下方式提交：
   - 将代码推送到仓库
   - 使用"项目提交"模板创建issue
   - 链接到演示视频/GitHub Pages
2. 教师审查：
   - 检查仓库提交
   - 审查文档
   - 测试硬件（如适用）
   - 使用 `assignments/*/rubric.md` 中的评分标准
3. 提供反馈：
   - 对提交/PR发表评论
   - 创建审查issues
   - 在LMS中更新成绩

## 故障排除

### 常见问题

**问题：学生无法接受作业**
- 解决方案：验证学生有GitHub账户并已登录
- 确保邀请链接正确且未过期

**问题：接受后仓库未创建**
- 解决方案：等待2-3分钟，刷新页面
- 检查组织的仓库限制

**问题：学生无法推送到仓库**
- 解决方案：验证仓库权限
- 检查学生是否使用正确的远程URL

**问题：组织达到仓库限制**
- 解决方案：申请GitHub教育福利
- 归档旧的作业仓库

**问题：学生仓库中的合并冲突**
- 解决方案：提供Git培训（参见第2天材料）
- 为常见Git问题创建故障排除指南

### 获取帮助

- GitHub Classroom文档：https://docs.github.com/en/education/manage-coursework-with-github-classroom
- GitHub教育社区：https://education.github.community/
- 联系GitHub教育支持：education@github.com

---

## 📚 Next Steps

After completing this setup:

1. ✅ Test the workflow with a dummy student account
2. ✅ Prepare assignment repositories from templates
3. ✅ Brief teaching assistants on the workflow
4. ✅ Create student onboarding guide
5. ✅ Set up monitoring and backup procedures

**Ready to start teaching!** 🎓

完成此设置后的下一步：

1. ✅ 使用虚拟学生账户测试工作流
2. ✅ 从模板准备作业仓库
3. ✅ 向助教简要介绍工作流程
4. ✅ 创建学生入门指南
5. ✅ 设置监控和备份程序

**准备开始教学！** 🎓

