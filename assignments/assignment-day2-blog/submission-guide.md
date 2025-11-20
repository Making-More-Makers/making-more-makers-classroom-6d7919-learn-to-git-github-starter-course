# Assignment Submission Guide
# 作业提交指南

**Assignment**: Day 2 Blog  
**作业**: 第2天博客  
**Type**: GitHub Classroom Pull Request  
**类型**: GitHub Classroom拉取请求

---

## 📋 Overview | 概览

This guide walks you through submitting your Day 2 blog assignment step by step.

本指南逐步指导你提交Day 2博客作业。

**What you need to submit | 需要提交的内容**:
- Your deployed blog URL (部署的博客URL)
- Two screenshots (两张截图)
- A learning reflection (学习反思)

---

## 📦 Step 1: Create Assignment Folder | 创建作业文件夹

In your project root directory:

在项目根目录中：

```bash
# Navigate to your project (if not already there)
# 进入项目目录（如果还没在）
cd my-maker-blog

# Create assignment folder
# 创建作业文件夹
mkdir assignment
```

**Or use your file explorer | 或使用文件浏览器**:
- Right-click in project folder → New Folder → Name it `assignment`
- 在项目文件夹中右键 → 新建文件夹 → 命名为`assignment`

---

## 📝 Step 2: Create blog_link.txt | 创建blog_link.txt

### 2.1 Get Your Blog URL | 获取博客URL

Your deployed blog URL should be:

你的部署博客URL应该是：

```
https://YOUR-USERNAME.github.io/YOUR-REPO-NAME/
```

**Example | 示例**:
```
https://johnsmith.github.io/my-maker-blog/
```

**⚠️ Important | 重要**:
- Use the deployed URL, NOT `localhost:3000` (使用部署的URL，不是localhost:3000)
- Make sure it's accessible (确保可访问)
- Include `https://` (包含https://)
- Include the trailing `/` (包含结尾的斜杠)

### 2.2 Create the File | 创建文件

**Option A: Using Terminal | 使用终端**:

```bash
# On Windows (PowerShell)
echo "https://YOUR-USERNAME.github.io/YOUR-REPO-NAME/" > assignment/blog_link.txt

# On Mac/Linux
echo "https://YOUR-USERNAME.github.io/YOUR-REPO-NAME/" > assignment/blog_link.txt
```

**Option B: Using Text Editor | 使用文本编辑器**:

1. Open your code editor (打开代码编辑器)
2. Create new file: `assignment/blog_link.txt` (创建新文件)
3. Paste your URL (粘贴URL)
4. Save (保存)

**Example content | 示例内容**:
```
https://johnsmith.github.io/my-maker-blog/
```

---

## 📸 Step 3: Take Screenshots | 截取截图

You need **2 screenshots** (你需要2张截图):

### 3.1 Homepage Screenshot | 首页截图

**What to capture | 截取什么**:
- Your deployed blog homepage (部署的博客首页)
- Browser address bar showing the URL (浏览器地址栏显示URL)
- Main content visible (主要内容可见)

**How to take | 如何截取**:

**Windows**:
```
Method 1: Win + Shift + S (推荐)
- Press Win + Shift + S
- Select the area
- Click save icon
- Save as: assignment/home_screenshot.png

Method 2: Snipping Tool
- Open Snipping Tool
- New → Select window
- Save as: assignment/home_screenshot.png
```

**Mac**:
```
Method 1: Cmd + Shift + 4 (推荐)
- Press Cmd + Shift + 4
- Drag to select area
- Screenshot saves to Desktop
- Move to: assignment/home_screenshot.png

Method 2: Cmd + Shift + 3 (Full screen)
- Press Cmd + Shift + 3
- Screenshot saves to Desktop
- Crop and move to: assignment/home_screenshot.png
```

**Tips | 技巧**:
- ✅ Make sure URL is visible (确保URL可见)
- ✅ Capture enough content (截取足够内容)
- ✅ Clear and readable (清晰可读)
- ✅ Save as PNG format (保存为PNG格式)

---

### 3.2 Blog Post Screenshot | 博文截图

**What to capture | 截取什么**:
- Your first blog post (第一篇博客)
- All sections visible (所有部分可见)
- You may need to scroll or take multiple shots (可能需要滚动或多次截图)

**How to take | 如何截取**:

Use the same methods as homepage screenshot.

使用与首页截图相同的方法。

**For long posts | 对于长文章**:

**Option 1: Full Page Screenshot Extension | 全页截图扩展**:
- Install browser extension like "Full Page Screen Capture"
- 安装浏览器扩展如"Full Page Screen Capture"
- Click extension icon on your blog post page
- 在博客文章页面点击扩展图标
- Save as: `assignment/post_screenshot.png`

**Option 2: Multiple Screenshots | 多次截图**:
- Take screenshot of top section (截取顶部)
- Take screenshot of middle section (截取中部)
- Take screenshot of bottom section (截取底部)
- Combine in image editor (在图片编辑器中合并)
- Save as: `assignment/post_screenshot.png`

**Option 3: Zoom Out | 缩小**:
- Press `Ctrl + -` (Windows) or `Cmd + -` (Mac) to zoom out
- 按Ctrl + -（Windows）或Cmd + -（Mac）缩小
- Capture more content in one screenshot
- 在一张截图中捕获更多内容

---

## 📄 Step 4: Write readme.md | 编写readme.md

Create a file: `assignment/readme.md`

创建文件：`assignment/readme.md`

### Template | 模板

```markdown
# Day 2 Blog Assignment - Learning Summary
# 第2天博客作业 - 学习总结

**Name | 姓名**: [Your Name]  
**Date | 日期**: [Today's Date]  
**Blog URL | 博客URL**: [Your deployed URL]

---

## What I Learned Today | 今天学到的内容

[Write 3-5 sentences about what you learned today]
[写3-5句话说明你今天学到了什么]

Today I learned how to...

今天我学会了如何...

### Key Concepts | 关键概念

1. **Docusaurus**: [What you learned about Docusaurus]
2. **Markdown**: [What you learned about Markdown]
3. **Git/GitHub**: [What you learned about Git/GitHub]
4. **Deployment**: [What you learned about deployment]
5. [Any other concept]

---

## Challenges I Faced | 我遇到的挑战

### Challenge 1 | 挑战1: [Name of challenge]

**Problem | 问题**: [Describe what went wrong]

**Solution | 解决方案**: [How you solved it]

**What I learned | 学到的**: [What this taught you]

### Challenge 2 | 挑战2: [Name of challenge]

**Problem | 问题**: 

**Solution | 解决方案**: 

**What I learned | 学到的**: 

### Challenge 3 | 挑战3: [Name of challenge]

**Problem | 问题**: 

**Solution | 解决方案**: 

**What I learned | 学到的**: 

---

## What Worked Well | 做得好的地方

[What went smoothly? What are you proud of?]
[什么进展顺利？你为什么感到自豪？]

- 
- 
- 

---

## Next Steps | 下一步

My plans for continuing this blog:

继续这个博客的计划：

- [ ] Add more blog posts regularly
- [ ] Add photos to my projects page
- [ ] Customize the theme colors
- [ ] Create an About page
- [ ] [Your own ideas]

---

## Technical Details | 技术细节

**Technologies Used | 使用的技术**:
- Docusaurus v[version]
- Node.js v[version]
- Git & GitHub
- GitHub Pages
- Markdown

**Time Spent | 花费时间**:
- In class: approximately ____ hours (课堂上：约____小时)
- After class: approximately ____ hours (课后：约____小时)
- Total: approximately ____ hours (总计：约____小时)

**Resources Used | 使用的资源**:
- Course materials (课程材料)
- Docusaurus documentation (Docusaurus文档)
- TA help (助教帮助)
- [Other resources]

---

## Reflection | 反思

### What surprised me | 让我惊讶的

[What was unexpected or interesting?]

### What I would do differently | 我会做不同的

[If you could start over, what would you change?]

### How this relates to maker projects | 这与创客项目的关系

[How does having a blog help with your maker journey?]

---

## Screenshots Included | 包含的截图

- ✅ `home_screenshot.png` - Homepage of deployed blog
- ✅ `post_screenshot.png` - First blog post

---

*This reflection was written on [date] as part of the Day 2 assignment for Making More Makers.*

*本反思写于[日期]，作为Making More Makers第2天作业的一部分。*
```

### Tips for Writing | 写作技巧

1. **Be honest** (诚实)
   - Don't say everything was easy if it wasn't (如果不容易就不要说很容易)
   - Share real challenges (分享真实挑战)

2. **Be specific** (具体)
   - Not: "I learned a lot" (不要："我学到很多")
   - Yes: "I learned how to configure docusaurus.config.js for GitHub Pages deployment"
   - 是："我学会了如何配置docusaurus.config.js以部署到GitHub Pages"

3. **Be reflective** (反思)
   - Why was this challenging? (为什么有挑战？)
   - What will you do differently next time? (下次会做什么不同？)
   - How does this help your maker journey? (这如何帮助你的创客之旅？)

---

## 🔍 Step 5: Verify Your Files | 验证文件

Before submitting, check that you have:

提交前，检查你有：

```
assignment/
├── blog_link.txt              ✅ Contains your deployed URL
├── home_screenshot.png        ✅ PNG file, clear and readable
├── post_screenshot.png        ✅ PNG file, shows complete post
└── readme.md                  ✅ Complete with all sections
```

### Verification Commands | 验证命令

```bash
# List files in assignment folder
# 列出assignment文件夹中的文件
ls assignment/

# OR on Windows PowerShell
dir assignment\

# You should see all 4 files
# 你应该看到所有4个文件
```

### Check File Sizes | 检查文件大小

```bash
# Check if files exist and their sizes
# 检查文件是否存在及其大小
ls -lh assignment/

# Screenshot files should be 50KB-5MB typically
# 截图文件通常应该是50KB-5MB
```

---

## 💾 Step 6: Commit to Git | 提交到Git

Add your assignment files to Git:

将作业文件添加到Git：

```bash
# Add all assignment files
# 添加所有作业文件
git add assignment/

# Check what will be committed
# 检查将要提交什么
git status

# Commit with descriptive message
# 用描述性消息提交
git commit -m "Add Day 2 blog assignment submission files"

# Push to GitHub
# 推送到GitHub
git push origin main
```

---

## 🚀 Step 7: Submit via GitHub Classroom | 通过GitHub Classroom提交

### 7.1 Go to GitHub Classroom Assignment Page

访问GitHub Classroom作业页面

Your instructor will provide a link like:

教师会提供一个链接，如：

```
https://classroom.github.com/a/XXXXXXX
```

### 7.2 Accept the Assignment | 接受作业

1. Click the assignment link (点击作业链接)
2. Accept the assignment (接受作业)
3. A repository will be created for you (会为你创建仓库)

### 7.3 Create Pull Request | 创建拉取请求

1. **Go to your assignment repository on GitHub**
   前往你在GitHub上的作业仓库

2. **Click "Pull requests" tab**
   点击"Pull requests"标签

3. **Click "New pull request"**
   点击"New pull request"

4. **Set up the PR | 设置PR**:
   - Base: `main` (or as specified by instructor)
   - Compare: `main` (your branch)
   - Title: "Day 2 Blog Assignment - [Your Name]"
   - 标题："Day 2 Blog Assignment - [你的名字]"

5. **Add description | 添加描述**:
   ```markdown
   ## Assignment Submission | 作业提交

   **Name | 姓名**: [Your Name]
   **Date | 日期**: [Date]

   ## Checklist | 检查清单

   - [x] Blog deployed to GitHub Pages
   - [x] First blog post completed
   - [x] Projects page created
   - [x] `assignment/` folder with all required files
   - [x] Screenshots included
   - [x] Learning reflection written

   ## Blog URL | 博客URL

   [Your deployed blog URL]

   ## Notes | 备注

   [Any additional notes for the instructor]
   ```

6. **Click "Create pull request"**
   点击"Create pull request"

---

## ✅ Step 8: Final Verification | 最终验证

After creating the PR, verify:

创建PR后，验证：

### Check Your PR | 检查你的PR

- [ ] PR is created (PR已创建)
- [ ] Title is descriptive (标题有描述性)
- [ ] Description is complete (描述完整)
- [ ] All files are visible in "Files changed" tab (所有文件在"Files changed"标签中可见)

### Test Your Blog | 测试你的博客

- [ ] Blog URL works (博客URL有效)
- [ ] Homepage loads correctly (首页正确加载)
- [ ] Blog post is readable (博客文章可读)
- [ ] Projects page is accessible (Projects页面可访问)
- [ ] No broken links (没有损坏的链接)

### Verify Assignment Folder | 验证作业文件夹

- [ ] `blog_link.txt` contains correct URL (blog_link.txt包含正确URL)
- [ ] `home_screenshot.png` is clear (home_screenshot.png清晰)
- [ ] `post_screenshot.png` shows full content (post_screenshot.png显示完整内容)
- [ ] `readme.md` has thoughtful reflection (readme.md有深思熟虑的反思)

---

## 🎯 Submission Checklist | 提交检查清单

Print this or keep it open while submitting:

提交时打印或保持打开：

### Blog Content | 博客内容
- [ ] First blog post written with all required sections
- [ ] Projects page created with Day 1 project details
- [ ] Markdown formatting used correctly
- [ ] Content is genuine and reflective

### Deployment | 部署
- [ ] Blog deployed to GitHub Pages
- [ ] URL accessible from any browser
- [ ] All pages load without errors
- [ ] Assets (if any) load correctly

### Assignment Files | 作业文件
- [ ] `assignment/` folder created
- [ ] `blog_link.txt` with deployed URL
- [ ] `home_screenshot.png` (clear, shows URL)
- [ ] `post_screenshot.png` (shows complete post)
- [ ] `readme.md` with reflection

### Git/GitHub | Git/GitHub
- [ ] All files committed to Git
- [ ] Pushed to GitHub
- [ ] Repository is accessible
- [ ] Pull request created

---

## 🆘 Common Submission Issues | 常见提交问题

### Issue: Can't find assignment folder
### 问题：找不到作业文件夹

**Reason | 原因**: Folder created in wrong location (文件夹创建在错误位置)

**Solution | 解决方案**:
```bash
# Make sure you're in project root
# 确保你在项目根目录
cd my-maker-blog

# Create folder here
# 在这里创建文件夹
mkdir assignment
```

---

### Issue: Screenshot file too large
### 问题：截图文件太大

**Reason | 原因**: High resolution or uncompressed (高分辨率或未压缩)

**Solution | 解决方案**:
- Use online compressor: https://tinypng.com (使用在线压缩器)
- Or take screenshot at lower resolution (或以较低分辨率截图)
- Ideal size: 200KB-2MB (理想大小：200KB-2MB)

---

### Issue: PR not showing files
### 问题：PR未显示文件

**Reason | 原因**: Files not committed or pushed (文件未提交或推送)

**Solution | 解决方案**:
```bash
# Check git status
git status

# If files are untracked
git add assignment/
git commit -m "Add assignment files"
git push origin main
```

---

### Issue: Blog URL in txt file doesn't work
### 问题：txt文件中的博客URL不工作

**Reason | 原因**: Wrong URL format (URL格式错误)

**Solution | 解决方案**:
- Check format: `https://username.github.io/repo-name/`
- 检查格式：包含https://和结尾斜杠
- No spaces or extra characters (没有空格或额外字符)
- Copy-paste from browser address bar (从浏览器地址栏复制粘贴)

---

## 💡 Tips for Success | 成功技巧

1. **Start early** (尽早开始)
   - Don't wait until the deadline (不要等到截止日期)
   - Give yourself time to troubleshoot (给自己时间排除故障)

2. **Test everything** (测试所有内容)
   - Click your blog URL in a private/incognito window (在隐私/无痕窗口点击博客URL)
   - Open screenshots to verify they're readable (打开截图验证可读)

3. **Ask for help** (寻求帮助)
   - If stuck, raise hand in class (如果卡住，课堂上举手)
   - Use office hours (使用答疑时间)
   - Post in course forum (在课程论坛发帖)

4. **Keep backups** (保留备份)
   - Save screenshots in multiple places (在多个地方保存截图)
   - Keep a copy of your readme text (保留readme文本副本)

---

## 📞 Need Help? | 需要帮助？

**During Class | 课堂上**:
- 🙋 Raise your hand (举手)
- Ask TA for assistance (请助教帮忙)

**After Class | 课后**:
- 📧 Email instructor (给教师发邮件)
- 💬 Post in course forum (在课程论坛发帖)
- 🕐 Attend office hours (参加答疑时间)

**Technical Issues | 技术问题**:
- Check troubleshooting sections in course materials (查看课程材料中的故障排查部分)
- Review quick reference guide (查看快速参考指南)

---

## ⏰ Deadline | 截止时间

**Due | 截止**: [Instructor will specify] ([教师将指定])

**Late Policy | 迟交政策**: [Instructor will specify] ([教师将指定])

---

## 🎉 After Submission | 提交后

Once submitted:

提交后：

- ✅ You can relax! (你可以放松了！)
- ✅ Instructor will review and provide feedback (教师会审查并提供反馈)
- ✅ You can continue improving your blog (你可以继续改进博客)
- ✅ Your blog remains yours to keep and grow (博客永远属于你，可以继续成长)

**Keep working on your blog!**

**继续改进你的博客！**

Your blog is a living document - add new posts, improve styling, and showcase new projects!

你的博客是一个活文档 - 添加新文章、改进样式、展示新项目！

---

**Good luck with your submission! 提交顺利！** 🚀

---

*Last updated: [Date]*  
*最后更新：[日期]*

