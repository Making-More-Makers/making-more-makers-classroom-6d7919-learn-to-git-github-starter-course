# Day 2: Digital Tools & Project Planning
# 第2天：数字工具与项目规划

[English](#english) | [中文](#chinese)

---

<a name="english"></a>
## 📅 Schedule

**Morning Session**: 9:00 AM - 12:00 PM - Git, GitHub & Documentation  
**Afternoon Session**: 1:30 PM - 5:00 PM - TinkerCAD & Project Planning

---

## 🎯 Learning Objectives

By the end of Day 2, students will be able to:

- Use Git for version control
- Create and manage GitHub repositories
- Deploy websites using GitHub Pages
- Write effective documentation in Markdown
- Design 3D models in TinkerCAD
- Plan and propose a complete maker project
- Create comprehensive project proposals

---

## 📚 Morning Session (9:00 AM - 12:00 PM)

### 9:00 - 10:30: Git & GitHub Fundamentals

**Topics**:
- What is version control and why it matters
- Git vs GitHub: Understanding the difference
- Basic Git workflow
- GitHub repository structure
- Collaboration with Git

**Git Basics**:
- Installing Git
- Configuring Git (username, email)
- Git concepts: repository, commit, branch
- Basic commands:
  - `git init` - Initialize repository
  - `git clone` - Clone repository
  - `git add` - Stage changes
  - `git commit` - Save changes
  - `git push` - Upload to remote
  - `git pull` - Download from remote
  - `git status` - Check status

**Hands-on Activity 1**: Create Your First Repository
1. Create a new repository on GitHub
2. Clone it to your computer
3. Add a README.md file
4. Commit and push your changes
5. View changes on GitHub

**Hands-on Activity 2**: Making Commits
1. Create a new file
2. Make changes to existing files
3. Stage changes with `git add`
4. Commit with descriptive message
5. Push to GitHub
6. View commit history

**Writing Good Commit Messages**:
- Be descriptive but concise
- Use present tense
- Explain "what" and "why"
- Examples:
  - ✅ "Add temperature sensor reading function"
  - ✅ "Fix LED blinking timing issue"
  - ❌ "update"
  - ❌ "changes"

**Best Practices**:
- Commit often
- Keep commits focused
- Don't commit broken code
- Use .gitignore for unnecessary files

---

### 10:30 - 10:45: Break ☕

---

### 10:45 - 12:00: GitHub Pages & Documentation

**Markdown Syntax Essentials**:
- Headers (`#`, `##`, `###`)
- Bold and italic (`**bold**`, `*italic*`)
- Lists (ordered and unordered)
- Links (`[text](url)`)
- Images (`![alt](image-url)`)
- Code blocks (`` ` `` for inline, ``` for blocks)
- Tables

**Markdown Exercise**: See `exercises/markdown-practice.md`

**Documentation Best Practices**:
- Clear project title and description
- Installation/setup instructions
- Usage examples
- Circuit diagrams
- Troubleshooting section
- License information
- Credits and acknowledgments

**GitHub Pages Setup**:
1. Go to repository Settings
2. Navigate to Pages section
3. Select branch (usually `main`)
4. Choose folder (root or `/docs`)
5. Save and wait for deployment
6. Access site at `username.github.io/repo-name`

**Hands-on Activity**: Deploy Personal Page
1. Create a repository named `username.github.io`
2. Add an `index.html` or `README.md`
3. Enable GitHub Pages
4. Customize your page
5. Add project links
6. Push changes and view live site

**Portfolio Best Practices**:
- Professional appearance
- Clear navigation
- Project showcases with images
- Brief descriptions
- Links to code repositories
- Contact information

**Templates Available**: See `examples/github-pages-templates/`

---

## 🔨 Afternoon Session (1:30 PM - 5:00 PM)

### 1:30 - 2:30: TinkerCAD Introduction

**3D Design Basics**:
- Understanding 3D space (X, Y, Z axes)
- Basic shapes and primitives
- Combining shapes
- Subtractive design (holes)

**TinkerCAD Interface**:
- Workplane
- Shape library
- View controls (pan, zoom, rotate)
- Measurement tools
- Snap grid
- Align tool
- Group/ungroup

**Essential Operations**:
- Moving objects
- Rotating objects
- Scaling objects
- Duplicating objects
- Aligning objects
- Grouping objects

**Designing for Electronics**:
- Measuring components first
- Adding tolerances (0.2-0.5mm)
- Creating mounting holes
- Cable management
- Ventilation considerations
- Access for USB/power

**Hands-on Exercise**: Design Simple Enclosure
1. Measure your Arduino board
2. Create base box
3. Add mounting posts
4. Create lid
5. Add access holes for ports
6. Export STL file

**Design Tips**:
- Start simple
- Test fit with paper prototypes
- Consider assembly method
- Plan for screws/fasteners
- Think about user interaction

---

### 2:30 - 3:00: Project Brainstorming

**Brainstorming Techniques**:
- Mind mapping
- SCAMPER method (Substitute, Combine, Adapt, Modify, Put to other use, Eliminate, Reverse)
- "How Might We" questions
- Problem-solution pairing

**Identifying Problems to Solve**:
- Daily frustrations
- Accessibility challenges
- Environmental issues
- Educational needs
- Community problems

**Team Discussion Time**:
- Each member shares 2-3 ideas
- Group discussion and feedback
- Combine ideas
- Vote on top 3 concepts
- Evaluate feasibility

**Feasibility Assessment**:
- Can it be completed in 4 days?
- Do we have the necessary skills?
- Are materials available?
- Is it safe to build?
- Does it solve a real problem?

**Questions to Ask**:
- Who is this for?
- What problem does it solve?
- How will it work?
- What makes it unique?
- Why is it important?

---

### 3:00 - 3:15: Break ☕

---

### 3:15 - 4:30: Project Planning Workshop

**Defining Project Scope**:
- Clear problem statement
- Target users
- Core functionality
- Nice-to-have features
- Constraints and limitations

**Creating Requirements Document**:

**1. Project Overview**
- Title
- One-sentence description
- Problem statement
- Proposed solution
- Target users

**2. Technical Requirements**
- Hardware components needed
- Software/libraries required
- Power requirements
- Size/form factor
- Performance requirements

**3. Functional Requirements**
- Core features (must-have)
- Secondary features (should-have)
- Optional features (nice-to-have)
- User interactions
- Expected outputs

**4. Materials List (Bill of Materials)**
- Component name
- Quantity needed
- Specifications
- Estimated cost (if known)
- Availability status

**5. Timeline & Milestones**
- Day 3 goal: Basic hardware working
- Day 4 goal: Software integration complete
- Day 5 morning: All features complete
- Day 5 afternoon: Documentation and polish

**6. Risk Assessment**
- Potential challenges
- Backup plans
- Unknown factors
- Dependencies

**7. Success Criteria**
- How will you know it works?
- What are the acceptance criteria?
- How will you demo it?

**Template**: See `exercises/project-proposal-template.md`

**Team Activity**: Complete Project Proposal
- Use provided template
- Fill in all sections
- Be specific and realistic
- Include sketches/diagrams
- Prepare materials list

---

### 4:30 - 5:00: Materials Request & Q&A

**Materials Request Process**:
1. Review lab inventory
2. Identify needed components
3. Submit materials request via GitHub Issue
4. Wait for instructor approval
5. Adjust plan if items unavailable

**Using Issue Templates**:
- Navigate to repository
- Click "Issues" → "New Issue"
- Select "Materials Request" template
- Fill in required information
- Submit and wait for response

**Instructor Review**:
- Feasibility check
- Availability verification
- Safety considerations
- Suggestions for alternatives
- Approval or request modifications

**Adjusting Project Scope**:
- If materials unavailable:
  - Find alternatives
  - Simplify design
  - Change approach
  - Pivot to different idea
- Get instructor guidance

**Q&A Time**:
- Technical questions about components
- Clarifications on requirements
- Advice on design decisions
- Timeline concerns
- Any other questions

---

## 📝 Homework

### Assignment 2: Project Proposal

**Due**: End of Day 2 (by 11:59 PM)

**Task**: Create a comprehensive project proposal

**Deliverables**:
1. **README.md** in your team repository with:
   - Project title and description
   - Problem statement
   - Proposed solution
   - Target users
   
2. **requirements.md** with:
   - Technical requirements
   - Functional requirements
   - Success criteria
   
3. **materials.md** with:
   - Complete bill of materials
   - Component specifications
   - Availability notes
   
4. **timeline.md** with:
   - Day-by-day plan
   - Milestones for Days 3-5
   - Task assignments
   
5. **sketches/** folder with:
   - Hand-drawn or digital sketches
   - Circuit diagram draft
   - Enclosure concept

**Submission**: Push to GitHub Classroom team repository

**Evaluation**: See [Assignment 2 Rubric](../../assignments/assignment2-project-proposal/rubric.md)

---

## 📚 Resources

### Git & GitHub
- [Git Official Documentation](https://git-scm.com/doc)
- [GitHub Guides](https://guides.github.com/)
- [Git Cheat Sheet](https://education.github.com/git-cheat-sheet-education.pdf)
- [Learn Git Branching (Interactive)](https://learngitbranching.js.org/)

### Markdown
- [Markdown Guide](https://www.markdownguide.org/)
- [GitHub Markdown](https://guides.github.com/features/mastering-markdown/)
- [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)

### TinkerCAD
- [TinkerCAD Official Site](https://www.tinkercad.com/)
- [TinkerCAD Learning Center](https://www.tinkercad.com/learn)
- [TinkerCAD Tutorials](https://www.youtube.com/c/TinkercadOfficial)

### Project Planning
- [Project Planning Guide](https://www.instructables.com/How-to-Plan-a-Maker-Project/)
- [Design Thinking Process](https://www.interaction-design.org/literature/article/5-stages-in-the-design-thinking-process)

---

## 💡 Tips for Success

1. **Git**: Commit early, commit often
2. **Documentation**: Write as if explaining to yourself in 6 months
3. **TinkerCAD**: Start simple, iterate
4. **Project Planning**: Be realistic about scope
5. **Team Communication**: Use GitHub Issues and project board
6. **Materials**: Have backup options
7. **Questions**: Ask instructors for feedback early

---

## 🎯 Success Criteria

By the end of Day 2, you should be able to:

- ✅ Create and manage Git repositories
- ✅ Make commits with meaningful messages
- ✅ Deploy a simple GitHub Pages site
- ✅ Write clear documentation in Markdown
- ✅ Design basic 3D models in TinkerCAD
- ✅ Create comprehensive project proposal
- ✅ Plan project timeline and milestones
- ✅ Submit materials request
- ✅ Complete Assignment 2

---

<a name="chinese"></a>
## 📅 时间表

**上午时段**: 9:00 - 12:00 - Git、GitHub与文档  
**下午时段**: 1:30 - 5:00 - TinkerCAD与项目规划

---

## 🎯 学习目标

第2天结束时，学生将能够：

- 使用Git进行版本控制
- 创建和管理GitHub仓库
- 使用GitHub Pages部署网站
- 用Markdown编写有效文档
- 在TinkerCAD中设计3D模型
- 规划和提出完整的创客项目
- 创建全面的项目提案

---

## 📚 上午时段（9:00 - 12:00）

### 9:00 - 10:30: Git与GitHub基础

**主题**：
- 什么是版本控制及其重要性
- Git与GitHub：理解区别
- 基本Git工作流程
- GitHub仓库结构
- 使用Git协作

**Git基础**：
- 安装Git
- 配置Git（用户名、邮箱）
- Git概念：仓库、提交、分支
- 基本命令：
  - `git init` - 初始化仓库
  - `git clone` - 克隆仓库
  - `git add` - 暂存更改
  - `git commit` - 保存更改
  - `git push` - 上传到远程
  - `git pull` - 从远程下载
  - `git status` - 检查状态

**动手活动1**：创建你的第一个仓库
1. 在GitHub上创建新仓库
2. 克隆到你的计算机
3. 添加README.md文件
4. 提交并推送你的更改
5. 在GitHub上查看更改

**动手活动2**：进行提交
1. 创建新文件
2. 更改现有文件
3. 使用`git add`暂存更改
4. 使用描述性消息提交
5. 推送到GitHub
6. 查看提交历史

**编写良好的提交消息**：
- 描述性但简洁
- 使用现在时
- 解释"什么"和"为什么"
- 示例：
  - ✅ "添加温度传感器读取函数"
  - ✅ "修复LED闪烁时间问题"
  - ❌ "更新"
  - ❌ "更改"

**最佳实践**：
- 经常提交
- 保持提交专注
- 不要提交损坏的代码
- 对不必要的文件使用.gitignore

---

### 10:30 - 10:45: 休息 ☕

---

### 10:45 - 12:00: GitHub Pages与文档

**Markdown语法要点**：
- 标题（`#`、`##`、`###`）
- 粗体和斜体（`**粗体**`、`*斜体*`）
- 列表（有序和无序）
- 链接（`[文本](url)`）
- 图片（`![替代文本](图片-url)`）
- 代码块（`` ` ``用于内联，```用于块）
- 表格

**Markdown练习**：见`exercises/markdown-practice.md`

**文档最佳实践**：
- 清晰的项目标题和描述
- 安装/设置说明
- 使用示例
- 电路图
- 故障排除部分
- 许可信息
- 致谢和鸣谢

**GitHub Pages设置**：
1. 转到仓库设置
2. 导航到Pages部分
3. 选择分支（通常是`main`）
4. 选择文件夹（根目录或`/docs`）
5. 保存并等待部署
6. 在`username.github.io/repo-name`访问网站

**动手活动**：部署个人页面
1. 创建名为`username.github.io`的仓库
2. 添加`index.html`或`README.md`
3. 启用GitHub Pages
4. 自定义你的页面
5. 添加项目链接
6. 推送更改并查看实时网站

**作品集最佳实践**：
- 专业外观
- 清晰导航
- 带图片的项目展示
- 简要描述
- 代码仓库链接
- 联系信息

**可用模板**：见`examples/github-pages-templates/`

---

## 🔨 下午时段（1:30 - 5:00）

### 1:30 - 2:30: TinkerCAD入门

**3D设计基础**：
- 理解3D空间（X、Y、Z轴）
- 基本形状和基元
- 组合形状
- 减法设计（孔）

**TinkerCAD界面**：
- 工作平面
- 形状库
- 视图控制（平移、缩放、旋转）
- 测量工具
- 对齐网格
- 对齐工具
- 组合/取消组合

**基本操作**：
- 移动对象
- 旋转对象
- 缩放对象
- 复制对象
- 对齐对象
- 组合对象

**为电子设计**：
- 首先测量元件
- 添加公差（0.2-0.5mm）
- 创建安装孔
- 电缆管理
- 通风考虑
- USB/电源的访问

**动手练习**：设计简单外壳
1. 测量你的Arduino板
2. 创建底盒
3. 添加安装柱
4. 创建盖子
5. 为端口添加访问孔
6. 导出STL文件

**设计提示**：
- 从简单开始
- 用纸原型测试配合
- 考虑组装方法
- 计划螺钉/紧固件
- 考虑用户交互

---

### 2:30 - 3:00: 项目头脑风暴

**头脑风暴技巧**：
- 思维导图
- SCAMPER方法（替代、组合、适应、修改、用于其他用途、消除、反转）
- "我们如何"问题
- 问题-解决方案配对

**识别要解决的问题**：
- 日常挫折
- 可访问性挑战
- 环境问题
- 教育需求
- 社区问题

**团队讨论时间**：
- 每个成员分享2-3个想法
- 小组讨论和反馈
- 组合想法
- 投票选出前3个概念
- 评估可行性

**可行性评估**：
- 能在4天内完成吗？
- 我们有必要的技能吗？
- 材料可用吗？
- 构建安全吗？
- 它解决了真正的问题吗？

**要问的问题**：
- 这是为谁设计的？
- 它解决什么问题？
- 它将如何工作？
- 是什么使它独特？
- 为什么它重要？

---

### 3:00 - 3:15: 休息 ☕

---

### 3:15 - 4:30: 项目规划工作坊

**定义项目范围**：
- 清晰的问题陈述
- 目标用户
- 核心功能
- 锦上添花的功能
- 约束和限制

**创建需求文档**：

**1. 项目概览**
- 标题
- 一句话描述
- 问题陈述
- 提议的解决方案
- 目标用户

**2. 技术要求**
- 所需硬件组件
- 所需软件/库
- 电源要求
- 尺寸/外形因素
- 性能要求

**3. 功能要求**
- 核心功能（必须有）
- 次要功能（应该有）
- 可选功能（锦上添花）
- 用户交互
- 预期输出

**4. 材料清单（物料清单）**
- 组件名称
- 所需数量
- 规格
- 估计成本（如已知）
- 可用性状态

**5. 时间线与里程碑**
- 第3天目标：基本硬件工作
- 第4天目标：软件集成完成
- 第5天上午：所有功能完成
- 第5天下午：文档和完善

**6. 风险评估**
- 潜在挑战
- 备用计划
- 未知因素
- 依赖关系

**7. 成功标准**
- 你如何知道它工作？
- 验收标准是什么？
- 你将如何演示它？

**模板**：见`exercises/project-proposal-template.md`

**团队活动**：完成项目提案
- 使用提供的模板
- 填写所有部分
- 具体且现实
- 包括草图/图表
- 准备材料清单

---

### 4:30 - 5:00: 材料申请与问答

**材料申请流程**：
1. 审查实验室库存
2. 识别所需组件
3. 通过GitHub Issue提交材料申请
4. 等待教师批准
5. 如物品不可用则调整计划

**使用Issue模板**：
- 导航到仓库
- 点击"Issues" → "New Issue"
- 选择"材料申请"模板
- 填写所需信息
- 提交并等待响应

**教师审查**：
- 可行性检查
- 可用性验证
- 安全考虑
- 替代方案建议
- 批准或要求修改

**调整项目范围**：
- 如果材料不可用：
  - 寻找替代方案
  - 简化设计
  - 改变方法
  - 转向不同想法
- 获得教师指导

**问答时间**：
- 关于组件的技术问题
- 对要求的澄清
- 设计决策的建议
- 时间线问题
- 任何其他问题

---

## 📝 作业

### 作业2：项目提案

**截止时间**：第2天结束（晚上11:59之前）

**任务**：创建全面的项目提案

**交付物**：
1. 团队仓库中的**README.md**包含：
   - 项目标题和描述
   - 问题陈述
   - 提议的解决方案
   - 目标用户
   
2. **requirements.md**包含：
   - 技术要求
   - 功能要求
   - 成功标准
   
3. **materials.md**包含：
   - 完整的物料清单
   - 组件规格
   - 可用性说明
   
4. **timeline.md**包含：
   - 逐日计划
   - 第3-5天的里程碑
   - 任务分配
   
5. **sketches/**文件夹包含：
   - 手绘或数字草图
   - 电路图草稿
   - 外壳概念

**提交**：推送到GitHub Classroom团队仓库

**评估**：见[作业2评分标准](../../assignments/assignment2-project-proposal/rubric.md)

---

## 📚 资源

### Git与GitHub
- [Git官方文档](https://git-scm.com/doc)
- [GitHub指南](https://guides.github.com/)
- [Git速查表](https://education.github.com/git-cheat-sheet-education.pdf)
- [学习Git分支（交互式）](https://learngitbranching.js.org/)

### Markdown
- [Markdown指南](https://www.markdownguide.org/)
- [GitHub Markdown](https://guides.github.com/features/mastering-markdown/)
- [Markdown速查表](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)

### TinkerCAD
- [TinkerCAD官方网站](https://www.tinkercad.com/)
- [TinkerCAD学习中心](https://www.tinkercad.com/learn)
- [TinkerCAD教程](https://www.youtube.com/c/TinkercadOfficial)

### 项目规划
- [项目规划指南](https://www.instructables.com/How-to-Plan-a-Maker-Project/)
- [设计思维过程](https://www.interaction-design.org/literature/article/5-stages-in-the-design-thinking-process)

---

## 💡 成功秘诀

1. **Git**：早提交，常提交
2. **文档**：写得像是在向6个月后的自己解释
3. **TinkerCAD**：从简单开始，迭代
4. **项目规划**：对范围要现实
5. **团队沟通**：使用GitHub Issues和项目看板
6. **材料**：有备用选项
7. **问题**：早点向教师征求反馈

---

## 🎯 成功标准

第2天结束时，你应该能够：

- ✅ 创建和管理Git仓库
- ✅ 使用有意义的消息进行提交
- ✅ 部署简单的GitHub Pages网站
- ✅ 用Markdown编写清晰的文档
- ✅ 在TinkerCAD中设计基本3D模型
- ✅ 创建全面的项目提案
- ✅ 规划项目时间线和里程碑
- ✅ 提交材料申请
- ✅ 完成作业2

---

**Plan well, build better!** 📋✨  
**规划好，构建更好！** 📋✨

