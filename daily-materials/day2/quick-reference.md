# Day 2 Morning: Quick Reference Guide
# 第2天上午：快速参考指南

**Keep this handy during class!**  
**课堂时把这个指南放在手边！**

---

## 🔑 Essential Commands | 核心命令

### Node.js & Project Setup | Node.js与项目设置

```bash
# Check Node.js version
# 检查Node.js版本
node --version

# Create Docusaurus project
# 创建Docusaurus项目
npx create-docusaurus@latest my-maker-blog classic

# Navigate to project
# 进入项目目录
cd my-maker-blog

# Install dependencies
# 安装依赖
npm install

# Start development server (opens http://localhost:3000)
# 启动开发服务器（打开http://localhost:3000）
npm start

# Stop server: Press Ctrl+C in terminal
# 停止服务器：在终端按Ctrl+C
```

---

### Git Commands | Git命令

```bash
# Initialize Git repository
# 初始化Git仓库
git init

# Check status
# 查看状态
git status

# Add all files to staging
# 添加所有文件到暂存区
git add .

# Commit with message
# 提交并附带消息
git commit -m "Your descriptive message here"

# Set branch to main
# 设置分支为main
git branch -M main

# Add remote repository
# 添加远程仓库
git remote add origin https://github.com/YOUR-USERNAME/my-maker-blog.git

# Push to GitHub
# 推送到GitHub
git push -u origin main

# For subsequent pushes
# 后续推送
git push
```

---

### Deployment | 部署

```bash
# Deploy to GitHub Pages
# 部署到GitHub Pages
npm run deploy

# This will:
# 这会：
# 1. Build your site (构建网站)
# 2. Create gh-pages branch (创建gh-pages分支)
# 3. Push to GitHub (推送到GitHub)
# 4. Deploy automatically (自动部署)
```

---

## 📁 Project Structure | 项目结构

```
my-maker-blog/
├── blog/                      📝 Your blog posts
│   └── *.md                      博客文章放这里
├── docs/                      📄 Documentation (optional)
│   └── *.md                      文档（可选）
├── src/
│   ├── components/            ⚛️  React components
│   ├── css/                   🎨 Custom styles
│   └── pages/                 📄 Custom pages
│       ├── index.js              Homepage (首页)
│       └── projects.md           Your projects page
├── static/                    🖼️  Static files
│   └── img/                      Images go here (图片放这里)
├── docusaurus.config.js       ⚙️  Site configuration
├── sidebars.js                📑 Sidebar navigation
├── package.json               📦 Project dependencies
├── .gitignore                 🚫 Files to ignore
└── README.md                  📖 Project readme
```

### Key Files to Know | 需要知道的关键文件

| File | Purpose | 文件 | 用途 |
|------|---------|------|------|
| `blog/*.md` | Blog posts | 博客文章 | 博客内容 |
| `src/pages/*.md` | Custom pages | 自定义页面 | 如Projects页面 |
| `static/img/*` | Images | 图片 | 存放图片资源 |
| `docusaurus.config.js` | Site config | 网站配置 | 配置网站信息 |

---

## ✏️ Markdown Quick Reference | Markdown快速参考

### Headers | 标题

```markdown
# H1 - Main Title
## H2 - Section
### H3 - Subsection
#### H4 - Smaller Section
```

### Text Formatting | 文本格式

```markdown
**Bold text** (粗体)
*Italic text* (斜体)
***Bold and Italic*** (粗斜体)
~~Strikethrough~~ (删除线)
```

### Lists | 列表

```markdown
Bullet list (无序列表):
- Item 1
- Item 2
  - Sub-item (子项)
  - Sub-item

Numbered list (有序列表):
1. First item
2. Second item
3. Third item
```

### Links & Images | 链接与图片

```markdown
[Link text](https://url.com)
[链接文字](网址)

![Image alt text](image-path.jpg)
![图片说明](图片路径)

Example (示例):
![My Project](./static/img/project.jpg)
```

### Code | 代码

```markdown
Inline code: `code here` (内联代码)

Code block (代码块):
```javascript
const greeting = "Hello World";
console.log(greeting);
```
```

### Blockquotes | 引用

```markdown
> This is a quote
> 这是一个引用
```

### Horizontal Rule | 分隔线

```markdown
---
```

### Task Lists | 任务列表

```markdown
- [x] Completed task
- [ ] Incomplete task
```

---

## ⚙️ docusaurus.config.js Settings | 配置设置

**Important fields to modify | 需要修改的重要字段**:

```javascript
const config = {
  title: 'My Maker Blog',               // Your site title (网站标题)
  tagline: 'My maker journey',          // Subtitle (副标题)
  favicon: 'img/favicon.ico',           // Site icon (网站图标)

  // GitHub Pages deployment (GitHub Pages部署)
  url: 'https://YOUR-USERNAME.github.io',
  baseUrl: '/my-maker-blog/',

  // GitHub info (GitHub信息)
  organizationName: 'YOUR-USERNAME',    // Your GitHub username
  projectName: 'my-maker-blog',         // Your repo name

  // Deployment settings (部署设置)
  deploymentBranch: 'gh-pages',
  trailingSlash: false,

  // Language (语言)
  i18n: {
    defaultLocale: 'en',
    locales: ['en'],
  },
};
```

**⚠️ Remember to replace | 记得替换**:
- `YOUR-USERNAME` with your actual GitHub username (用你的实际GitHub用户名)
- `my-maker-blog` with your actual repository name (用你的实际仓库名)

---

## 📝 Blog Post Front Matter | 博客文章Front Matter

Every blog post starts with Front Matter (metadata):

每篇博客文章开头都有Front Matter（元数据）：

```markdown
---
slug: unique-url-slug
title: Your Post Title
authors: [Your Name]
tags: [tag1, tag2, tag3]
date: 2024-11-20
---

# Your Content Starts Here

...
```

**Fields explained | 字段说明**:
- `slug`: URL path (URL路径) → `https://yourblog.com/blog/unique-url-slug`
- `title`: Post title shown on page (页面显示的文章标题)
- `authors`: Your name (你的名字)
- `tags`: Categories for filtering (用于筛选的分类标签)
- `date`: Publication date (发布日期，可选)

---

## 🆘 Common Issues & Quick Fixes | 常见问题与快速修复

### Issue: "node: command not found"
### 问题："node: command not found"

**Solution | 解决方案**:
1. Install Node.js from https://nodejs.org (从nodejs.org安装Node.js)
2. Restart your terminal (重启终端)
3. OR use GitHub Codespaces (或使用GitHub Codespaces)

---

### Issue: npm install errors
### 问题：npm install错误

**Solution | 解决方案**:

```bash
# Clear cache and retry (清除缓存并重试)
npm cache clean --force
npm install

# OR use yarn (或使用yarn)
npm install -g yarn
yarn install
```

---

### Issue: Port 3000 already in use
### 问题：端口3000已被占用

**Solution | 解决方案**:

```bash
# Option 1: Stop other npm processes
# 方案1：停止其他npm进程
# Press Ctrl+C in all terminal windows running npm

# Option 2: Use different port
# 方案2：使用不同端口
npm start -- --port 3001
```

---

### Issue: GitHub Pages shows 404
### 问题：GitHub Pages显示404

**Check these | 检查这些**:

1. ✅ Repository is **Public** (仓库是Public)
2. ✅ `gh-pages` branch exists (gh-pages分支存在)
3. ✅ GitHub Pages enabled in Settings > Pages (Settings > Pages中启用了GitHub Pages)
4. ✅ Wait 1-3 minutes after deploying (部署后等待1-3分钟)
5. ✅ Check `docusaurus.config.js` settings (检查docusaurus.config.js设置)
6. ✅ URL format correct: `https://username.github.io/repo-name/` (URL格式正确)

---

### Issue: Can't push to GitHub
### 问题：无法推送到GitHub

**Solution | 解决方案**:

Use Personal Access Token (使用Personal Access Token):

1. Go to GitHub: Settings → Developer settings → Personal access tokens (前往GitHub)
2. Generate new token (classic) (生成新token)
3. Select `repo` permissions (选择repo权限)
4. Copy the token (复制token)
5. When pushing, use token as password (推送时用token作为密码)

---

### Issue: Changes not showing on website
### 问题：更改未显示在网站上

**Solution | 解决方案**:

```bash
# For local development (本地开发)
# Save your file (Ctrl+S), browser auto-refreshes
# 保存文件（Ctrl+S），浏览器自动刷新

# For deployed site (已部署网站)
git add .
git commit -m "Update content"
git push origin main
npm run deploy
# Wait 1-3 minutes (等待1-3分钟)
```

---

## 📸 Taking Screenshots | 如何截图

### Windows

**Method 1**: Snipping Tool (截图工具)
- Press `Win + Shift + S`
- Select area
- Save as PNG

**Method 2**: Full Screen
- Press `PrtScn` (Print Screen)
- Paste in Paint
- Save as PNG

### Mac

**Method 1**: Selection
- Press `Cmd + Shift + 4`
- Select area
- Screenshot saved to Desktop

**Method 2**: Full Screen
- Press `Cmd + Shift + 3`
- Screenshot saved to Desktop

### Browser Extensions

- **Awesome Screenshot**
- **Full Page Screen Capture**
- Built-in browser tools (F12 → Device Toolbar)

---

## 🔗 Your Blog URL Format | 博客URL格式

```
https://YOUR-USERNAME.github.io/YOUR-REPO-NAME/
```

**Example | 示例**:
```
https://johnsmith.github.io/my-maker-blog/
```

**Important | 重要**:
- Replace `YOUR-USERNAME` with your GitHub username (替换为你的GitHub用户名)
- Replace `YOUR-REPO-NAME` with your repository name (替换为你的仓库名)
- Don't forget the trailing `/` (不要忘记最后的斜杠)
- URL is case-sensitive (URL区分大小写)

---

## ✅ Pre-Submission Checklist | 提交前检查清单

Before submitting your assignment:

提交作业前：

- [ ] Blog is deployed and accessible (博客已部署且可访问)
- [ ] First blog post is complete (第一篇博客完整)
- [ ] Projects page is created (Projects页面已创建)
- [ ] All content is in Markdown format (所有内容都是Markdown格式)
- [ ] Git repository is on GitHub (Git仓库在GitHub上)
- [ ] `assignment/` folder created (已创建assignment/文件夹)
- [ ] `blog_link.txt` has correct URL (blog_link.txt有正确URL)
- [ ] Both screenshots taken (已截取两张截图)
- [ ] `readme.md` reflection completed (readme.md反思已完成)
- [ ] All files committed and pushed (所有文件已提交和推送)

---

## 💡 Pro Tips | 专业技巧

### Workflow Tips | 工作流技巧

1. **Save frequently** (经常保存)
   - `Ctrl+S` (Windows) or `Cmd+S` (Mac)

2. **Commit often** (经常提交)
   - After each major change (每次重大更改后)
   - Use descriptive commit messages (使用描述性提交消息)

3. **Test locally first** (先在本地测试)
   - Check `localhost:3000` before deploying (部署前检查localhost:3000)

4. **Keep terminal open** (保持终端打开)
   - You'll need it for commands (你需要用它执行命令)

### Writing Tips | 写作技巧

1. **Be specific** (具体)
   - Use details and examples (使用细节和示例)
   - Not: "I learned a lot" (不要："我学到很多")
   - Yes: "I learned that triangular structures are more stable" (是："我学到三角形结构更稳定")

2. **Be authentic** (真实)
   - Write in your own voice (用你自己的语言)
   - Share real thoughts (分享真实想法)

3. **Use visuals** (使用视觉元素)
   - Add images if you have them (如果有图片就加上)
   - Use tables for structured data (用表格展示结构化数据)
   - Use lists for easy reading (用列表方便阅读)

---

## 📚 Helpful Resources | 有用资源

### Official Documentation | 官方文档
- **Docusaurus**: https://docusaurus.io/docs
- **Markdown Guide**: https://www.markdownguide.org
- **GitHub Pages**: https://docs.github.com/en/pages
- **Git Tutorial**: https://www.atlassian.com/git/tutorials

### Tools | 工具
- **Node.js**: https://nodejs.org
- **Git**: https://git-scm.com
- **VS Code**: https://code.visualstudio.com
- **GitHub**: https://github.com

### Get Help | 获取帮助
- 🙋 Raise hand for TA (举手找助教)
- 💬 Ask in course forum (在课程论坛提问)
- 📧 Email instructor (给教师发邮件)
- 📖 Check course materials (查看课程材料)

---

## 🎯 Quick Troubleshooting Decision Tree | 快速故障排查决策树

```
Problem? (遇到问题？)
│
├─ Can't install? (无法安装？)
│  └─ Check Node.js version → Try npm cache clean → Ask TA
│
├─ Code not working? (代码不工作？)
│  └─ Check terminal for errors → Read error message → Google it → Ask TA
│
├─ Can't see changes? (看不到更改？)
│  └─ Save file → Refresh browser → Check correct URL → Restart server
│
├─ Deploy failed? (部署失败？)
│  └─ Check config.js → Check repository Public → Wait 3 min → Check gh-pages branch
│
└─ Still stuck? (还是卡住？)
   └─ 🙋 Ask for help! (寻求帮助！)
```

---

**Print this guide or keep it open in a tab!**

**打印这个指南或在浏览器标签中保持打开！**

**You've got this! 加油！** 🚀

