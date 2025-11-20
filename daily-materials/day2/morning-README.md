# Day 2 Morning: Building Your Technical Blog with Docusaurus
# 第2天上午：用Docusaurus搭建你的技术博客

**Time**: 10:00 AM - 11:50 AM (110 minutes)  
**时间**: 上午10:00 - 11:50（110分钟）

---

## 📋 Overview | 课程概览

Welcome to Day 2! Today morning, you'll build your own professional technical blog using Docusaurus, a modern static site generator created by Meta (Facebook). By the end of this session, you'll have a live website on the internet showcasing your maker journey!

欢迎来到第2天！今天上午，你将使用Docusaurus搭建自己的专业技术博客。Docusaurus是Meta（Facebook）开发的现代静态网站生成器。课程结束时，你将拥有一个展示你创客之旅的在线网站！

---

## 🎯 Learning Objectives | 学习目标

By the end of this session, you will be able to:

本节课结束时，你将能够：

- ✅ Create a Docusaurus blog from scratch (从零创建Docusaurus博客)
- ✅ Start a local development server (启动本地开发服务器)
- ✅ Write blog posts in Markdown format (用Markdown格式撰写博客文章)
- ✅ Create a Projects page to showcase your work (创建Projects页面展示你的作品)
- ✅ Deploy your blog to GitHub Pages (将博客部署到GitHub Pages)
- ✅ Use Git and GitHub for version control (使用Git和GitHub进行版本控制)

---

## ⏱️ Schedule | 时间表

| Time | Activity | 时间 | 活动 |
|------|----------|------|------|
| 9:00-9:10 | Introduction: Why Blog? | 9:00-9:10 | 介绍：为什么要博客？ |
| 9:10-9:20 | Docusaurus Overview | 9:10-9:20 | Docusaurus概览 |
| 9:20-10:00 | Build Blog (Live Coding) | 9:20-10:00 | 搭建博客（Live Coding） |
| 10:00-10:30 | Write First Blog Post | 10:00-10:30 | 写第一篇博客 |
| 10:30-10:50 | Create Projects Page | 10:30-10:50 | 创建Projects页面 |
| 10:50-11:10 | Deploy to GitHub Pages | 10:50-11:10 | 部署到GitHub Pages |
| 11:10-11:15 | Assignment Explanation | 11:10-11:15 | 作业说明 |
| 11:15-11:20 | Wrap-up & Q&A | 11:15-11:20 | 总结与答疑 |

---

## 📚 Prerequisites | 前置要求

Before you begin, make sure you have:

开始之前，确保你已准备好：

### Required | 必需
- ✅ **Laptop** with 8GB+ RAM (笔记本电脑，8GB+内存)
- ✅ **Node.js v18+** installed ([Download here](https://nodejs.org)) (已安装Node.js v18+)
- ✅ **Git** installed ([Download here](https://git-scm.com)) (已安装Git)
- ✅ **Code Editor** (VS Code, Cursor, etc.) (代码编辑器)
- ✅ **GitHub account** (GitHub账号)
- ✅ **Internet connection** (互联网连接)

### Nice to Have | 最好有
- Basic understanding of Markdown (基础Markdown知识)
- Completion of Day 1 activities (完成Day 1活动)

---

## 🚀 Step-by-Step Guide | 逐步指南

Follow along with the instructor as you build your blog!

跟随讲师一起搭建你的博客！

---

### Step 1: Check Node.js Installation | 检查Node.js安装

**What to do | 操作**:

Open your terminal (PowerShell on Windows, Terminal on Mac) and type:

打开你的终端（Windows用PowerShell，Mac用Terminal）并输入：

```bash
node --version
```

**Expected result | 期望结果**:

You should see a version number like `v18.0.0` or higher.

你应该看到版本号，如`v18.0.0`或更高。

**If you see "command not found" | 如果看到"command not found"**:

- Ask your TA for help installing Node.js (请助教帮忙安装Node.js)
- OR use GitHub Codespaces (online, no installation needed) (或使用GitHub Codespaces，在线，无需安装)

---

### Step 2: Create Your Docusaurus Project | 创建Docusaurus项目

**What to do | 操作**:

```bash
npx create-docusaurus@latest my-maker-blog classic
```

**What this does | 这个命令的作用**:

- `npx`: Runs a Node.js package without installing it permanently (运行Node.js包而无需永久安装)
- `create-docusaurus@latest`: Uses the latest version of Docusaurus (使用最新版Docusaurus)
- `my-maker-blog`: Your blog's folder name (you can change this) (你的博客文件夹名，可以改)
- `classic`: Uses the classic template (使用经典模板)

**Wait time | 等待时间**: 1-2 minutes (download and setup) (1-2分钟，下载和设置)

**Expected result | 期望结果**: You'll see "Success! Created my-maker-blog" (你会看到"Success! Created my-maker-blog")

---

### Step 3: Navigate to Your Project | 进入项目目录

**What to do | 操作**:

```bash
cd my-maker-blog
```

**What this does | 这个命令的作用**: Changes directory to your new blog folder (切换到你的新博客文件夹)

---

### Step 4: Install Dependencies | 安装依赖

**What to do | 操作**:

```bash
npm install
```

**What this does | 这个命令的作用**: Installs all required packages (hundreds of them!) (安装所有必需的包，有几百个！)

**Wait time | 等待时间**: 1-2 minutes (1-2分钟)

**Common Issues | 常见问题**:

If you get errors, try:

如果遇到错误，尝试：

```bash
npm cache clean --force
npm install
```

---

### Step 5: Start Development Server | 启动开发服务器

**What to do | 操作**:

```bash
npm start
```

**What this does | 这个命令的作用**: Starts a local web server and opens your blog in a browser (启动本地Web服务器并在浏览器中打开你的博客)

**Expected result | 期望结果**:

- Your browser automatically opens to `http://localhost:3000` (浏览器自动打开到`http://localhost:3000`)
- You see the Docusaurus dinosaur mascot and "My Site" (你看到Docusaurus恐龙吉祥物和"My Site")

🎉 **Congratulations! Your blog is running!** (恭喜！你的博客运行起来了！)

---

### Step 6: Explore Project Structure | 探索项目结构

**Open your project folder in your code editor** (在代码编辑器中打开项目文件夹)

**Important folders and files | 重要文件夹和文件**:

```
my-maker-blog/
├── blog/                      📝 Your blog posts go here
│   └── *.md                       博客文章放这里
├── docs/                      📄 Documentation (optional)
│   └── *.md                       文档（可选）
├── src/
│   └── pages/                 📄 Custom pages (About, Projects, etc.)
│       └── *.md/*.js              自定义页面（About、Projects等）
├── static/                    🖼️  Images and static files
│   └── img/                       图片和静态文件
├── docusaurus.config.js       ⚙️  Site configuration
│                                  网站配置
└── package.json               📦 Project info
                                  项目信息
```

**Key locations to remember | 记住的关键位置**:

- **`blog/`** - Put your blog posts here (博客文章放这里)
- **`src/pages/`** - Put custom pages here (自定义页面放这里)
- **`static/img/`** - Put images here (图片放这里)
- **`docusaurus.config.js`** - Configure your site (配置网站)

---

### Step 7: Write Your First Blog Post | 写第一篇博客

**What to do | 操作**:

1. In your code editor, go to the `blog/` folder (在代码编辑器中，进入`blog/`文件夹)
2. Create a new file: `my-first-maker-post.md` (创建新文件：`my-first-maker-post.md`)
3. Copy the template from `assignments/assignment-day2-blog/templates/blog-post-template.md` (从`assignments/assignment-day2-blog/templates/blog-post-template.md`复制模板)
4. Fill in your own information (填写你自己的信息)

**Blog post structure | 博客文章结构**:

```markdown
---
slug: my-maker-journey-begins
title: My Maker Journey Begins - 我的创客之旅
authors: [Your Name]
tags: [maker, introduction, day1]
---

# About Me | 关于我

[Your introduction here]

## Why I'm Here | 为什么我来

[Your motivation]

## Day 1 Project | Day 1项目

[Your Spaghetti Challenge experience]

## Dream Project | 梦想项目

[Your project idea]

## What's Next | 接下来

[Your plans]
```

**What to include | 包含内容**:

- ✅ **About Me**: Who you are, your interests (你是谁，你的兴趣)
- ✅ **Why I'm Here**: Why you joined this program (为什么参加这个项目)
- ✅ **Day 1 Project**: Your Spaghetti Challenge experience (你的Spaghetti Challenge经历)
- ✅ **Dream Project**: What you want to build (你想做什么)
- ✅ **What's Next**: Your plans for upcoming days (接下来几天的计划)

**Save your file** (保存文件) and check your browser - your post should appear automatically!

保存文件并查看浏览器 - 你的文章应该自动出现！

---

### Step 8: Create Projects Page | 创建Projects页面

**What to do | 操作**:

1. Go to `src/pages/` folder (进入`src/pages/`文件夹)
2. Create a new file: `projects.md` (创建新文件：`projects.md`)
3. Copy the template from `assignments/assignment-day2-blog/templates/projects-page-template.md` (从模板复制)
4. Fill in your Day 1 project details (填写你的Day 1项目详情)

**What to include | 包含内容**:

- ✅ **Project Overview**: Brief description (项目概述：简要描述)
- ✅ **Challenge Goal**: What was the goal (挑战目标：目标是什么)
- ✅ **Our Design**: Your team's strategy (我们的设计：团队策略)
- ✅ **Final Result**: Height, team members, time (最终结果：高度、团队成员、时间)
- ✅ **Materials Used**: List of materials (使用材料：材料清单)
- ✅ **Lessons Learned**: At least 3 key learnings (学习收获：至少3个关键收获)

**Access your page** (访问页面) at: `http://localhost:3000/projects`

---

### Step 9: Initialize Git Repository | 初始化Git仓库

**What to do | 操作**:

```bash
git init
git add .
git commit -m "Initial commit: My maker blog"
```

**What these commands do | 这些命令的作用**:

1. `git init` - Creates a Git repository (创建Git仓库)
2. `git add .` - Stages all files (暂存所有文件)
3. `git commit -m "..."` - Saves a snapshot with a message (保存快照并附带消息)

---

### Step 10: Create GitHub Repository | 创建GitHub仓库

**What to do | 操作**:

1. Go to [GitHub.com](https://github.com) (访问GitHub.com)
2. Click the **+** icon (top right) → **New repository** (点击+图标 → New repository)
3. Fill in:
   - **Repository name**: `my-maker-blog` (仓库名)
   - **Description**: "My maker journey blog" (描述)
   - **Public** (select this) (选择Public)
   - **Do NOT check** "Add a README" (不要勾选"Add a README")
4. Click **Create repository** (点击Create repository)

---

### Step 11: Connect to GitHub | 连接到GitHub

**What to do | 操作**:

```bash
git branch -M main
git remote add origin https://github.com/YOUR-USERNAME/my-maker-blog.git
git push -u origin main
```

**⚠️ Important | 重要**: Replace `YOUR-USERNAME` with your actual GitHub username! (用你的实际GitHub用户名替换`YOUR-USERNAME`！)

**What these commands do | 这些命令的作用**:

1. `git branch -M main` - Renames branch to "main" (重命名分支为"main")
2. `git remote add origin ...` - Connects to GitHub (连接到GitHub)
3. `git push -u origin main` - Uploads your code (上传代码)

---

### Step 12: Configure Deployment | 配置部署

**What to do | 操作**:

1. Open `docusaurus.config.js` in your editor (在编辑器中打开`docusaurus.config.js`)
2. Find and modify these lines (找到并修改这些行):

```javascript
const config = {
  // ... other settings ...
  
  url: 'https://YOUR-USERNAME.github.io',
  baseUrl: '/my-maker-blog/',
  
  organizationName: 'YOUR-USERNAME',
  projectName: 'my-maker-blog',
  
  deploymentBranch: 'gh-pages',
  trailingSlash: false,
  
  // ... other settings ...
};
```

**⚠️ Important | 重要**: 

- Replace `YOUR-USERNAME` with your GitHub username (用你的GitHub用户名替换)
- Make sure `projectName` matches your repository name (确保`projectName`与仓库名匹配)
- Note the `/` at the beginning and end of `baseUrl` (注意`baseUrl`开头和结尾的`/`)

**Save the file!** (保存文件！)

---

### Step 13: Deploy to GitHub Pages! | 部署到GitHub Pages！

**What to do | 操作**:

```bash
npm run deploy
```

**What this does | 这个命令的作用**:

- Builds your website (构建网站)
- Creates a `gh-pages` branch (创建`gh-pages`分支)
- Pushes to GitHub (推送到GitHub)
- Automatically deploys your site (自动部署网站)

**Wait time | 等待时间**: 1-3 minutes (1-3分钟)

**Expected result | 期望结果**: You'll see "Published" at the end (最后你会看到"Published")

---

### Step 14: Access Your Live Site! | 访问你的在线网站！

**Your blog URL | 你的博客URL**:

```
https://YOUR-USERNAME.github.io/my-maker-blog/
```

**⚠️ Note | 注意**: 

- Replace `YOUR-USERNAME` with your actual username (用你的实际用户名替换)
- It may take 1-3 minutes for the site to be available (网站可能需要1-3分钟才能访问)
- Don't forget the trailing `/` (不要忘记最后的`/`)

🎉 **Congratulations! Your blog is live on the internet!** 

🎉 **恭喜！你的博客已经在互联网上线了！**

---

## 🔧 Command Cheatsheet | 命令速查表

Keep this handy for quick reference!

保存这个以便快速参考！

### Project Setup | 项目设置

```bash
# Check Node.js version
node --version

# Create new Docusaurus project
npx create-docusaurus@latest my-maker-blog classic

# Navigate to project
cd my-maker-blog

# Install dependencies
npm install

# Start development server
npm start
```

### Git Commands | Git命令

```bash
# Initialize repository
git init

# Check status
git status

# Stage all files
git add .

# Commit changes
git commit -m "Your message here"

# Push to GitHub
git push origin main
```

### Deployment | 部署

```bash
# Deploy to GitHub Pages
npm run deploy
```

---

## 🆘 Common Issues & Solutions | 常见问题与解决方案

### Problem: "node: command not found"
### 问题："node: command not found"

**Solution | 解决方案**:
- Install Node.js from [nodejs.org](https://nodejs.org) (从nodejs.org安装Node.js)
- OR use GitHub Codespaces (或使用GitHub Codespaces)
- Ask your TA for help (请助教帮忙)

---

### Problem: npm install errors
### 问题：npm install错误

**Solution | 解决方案**:

```bash
# Clear cache and retry
npm cache clean --force
npm install

# OR use yarn instead
npm install -g yarn
yarn install
```

---

### Problem: Port 3000 already in use
### 问题：端口3000已被使用

**Solution | 解决方案**:
- Stop other npm processes (停止其他npm进程)
- OR use a different port: `npm start -- --port 3001` (或使用其他端口)

---

### Problem: GitHub Pages shows 404
### 问题：GitHub Pages显示404

**Check these | 检查这些**:
1. Is your repository **Public**? (仓库是Public吗？)
2. Does the `gh-pages` branch exist? (gh-pages分支存在吗？)
3. Is GitHub Pages enabled in Settings? (Settings中启用了GitHub Pages吗？)
4. Did you wait 1-3 minutes after deploying? (部署后等待了1-3分钟吗？)
5. Is your `docusaurus.config.js` configured correctly? (docusaurus.config.js配置正确吗？)

---

### Problem: Can't push to GitHub
### 问题：无法推送到GitHub

**Solution | 解决方案**:
- Use a Personal Access Token instead of password (使用Personal Access Token而不是密码)
- Go to: GitHub Settings → Developer settings → Personal access tokens (前往：GitHub Settings → Developer settings → Personal access tokens)
- Generate token and use it as password (生成token并用作密码)

---

## 📝 Markdown Quick Reference | Markdown快速参考

Use these in your blog posts!

在博客文章中使用这些！

```markdown
# H1 Header
## H2 Header
### H3 Header

**Bold text**
*Italic text*

- Bullet point
- Another point

1. Numbered item
2. Another item

[Link text](https://url.com)
![Image alt text](image-path.jpg)

> Blockquote

`inline code`

```
code block
```
```

---

## 📋 Assignment | 作业

### What to Submit | 提交内容

See the full assignment details in: `assignments/assignment-day2-blog/README.md`

完整作业详情见：`assignments/assignment-day2-blog/README.md`

**Quick summary | 快速总结**:

You need to submit via GitHub Classroom:

你需要通过GitHub Classroom提交：

1. **`blog_link.txt`** - Your deployed blog URL (你部署的博客URL)
2. **`home_screenshot.png`** - Screenshot of homepage (首页截图)
3. **`post_screenshot.png`** - Screenshot of blog post (博文截图)
4. **`readme.md`** - Learning summary (学习总结)

**Grading | 评分**: 10 points total (总分10分)

See `assignments/assignment-day2-blog/rubric.md` for detailed grading criteria.

详细评分标准见`assignments/assignment-day2-blog/rubric.md`。

---

## 🌟 Tips for Success | 成功技巧

1. **Follow along with the instructor** (跟随讲师操作)
   - Don't rush ahead (不要急于求成)
   - If you get stuck, raise your hand (遇到问题举手)

2. **Save frequently** (经常保存)
   - Use Ctrl+S (Windows) or Cmd+S (Mac) (使用Ctrl+S或Cmd+S)

3. **Commit your changes** (提交你的更改)
   - Every time you make progress (每次取得进展时)
   - Use meaningful commit messages (使用有意义的提交消息)

4. **Be authentic** (保持真实)
   - Write in your own voice (用你自己的语言写)
   - Share your genuine thoughts (分享真实想法)

5. **Ask questions** (提问)
   - No question is stupid (没有愚蠢的问题)
   - TAs are here to help (助教在这里帮忙)

---

## 🔗 Useful Resources | 有用资源

### Official Documentation | 官方文档
- [Docusaurus Docs](https://docusaurus.io/docs) - Complete guide (完整指南)
- [Markdown Guide](https://www.markdownguide.org/) - Markdown syntax (Markdown语法)
- [GitHub Pages Docs](https://docs.github.com/en/pages) - Deployment help (部署帮助)

### Tools | 工具
- [Node.js](https://nodejs.org) - Download Node.js (下载Node.js)
- [Git](https://git-scm.com) - Download Git (下载Git)
- [VS Code](https://code.visualstudio.com) - Code editor (代码编辑器)

### Help | 帮助
- Raise your hand for TAs (举手找助教)
- Check the FAQ (查看FAQ)
- Ask in the course discussion forum (在课程论坛提问)

---

## 🎯 What's Next | 接下来

After this session, you'll:

本节课后，你将：

- Have your own professional blog live on the internet (拥有在线的专业博客)
- Be able to add new blog posts anytime (能随时添加新博客文章)
- Have a portfolio to showcase your maker projects (有展示创客项目的作品集)
- Know how to use Git and GitHub for version control (知道如何使用Git和GitHub进行版本控制)

**Keep updating your blog** throughout the course!

在整个课程中**持续更新你的博客**！

---

## 🎉 Celebrate Your Success! | 庆祝你的成功！

Once your blog is live:

博客上线后：

- ✅ Share the link with friends and family (与朋友和家人分享链接)
- ✅ Post it on social media (在社交媒体上发布)
- ✅ Add it to your resume/CV (添加到简历中)
- ✅ Keep writing and updating (持续写作和更新)

**You now have a permanent home for your maker journey!**

**你现在有了创客之旅的永久基地！**

---

**Need help? Raise your hand! We're here to support you.** 🙋‍♂️🙋‍♀️

**需要帮助？举手！我们在这里支持你。** 🙋‍♂️🙋‍♀️

**Let's build something amazing together!** 🚀

**让我们一起创造精彩！** 🚀

