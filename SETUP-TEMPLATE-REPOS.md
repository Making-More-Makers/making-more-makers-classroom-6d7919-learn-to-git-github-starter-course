# GitHub Classroom 模板仓库设置指南
# Setup Guide for GitHub Classroom Template Repositories

**目的**: 将4个作业仓库标记为模板，以便在 GitHub Classroom 中使用
**Purpose**: Mark 4 assignment repositories as templates for GitHub Classroom use

---

## ✅ 需要设置的仓库 | Repositories to Set Up

| # | 仓库名称 | 状态 | 链接 |
|---|---------|------|------|
| 1 | `mmm-day1-morning-intro` | ⏳ 待设置 | [设置](https://github.com/Making-More-Makers/mmm-day1-morning-intro/settings) |
| 2 | `mmm-day1-afternoon-ctf` | ⏳ 待创建 | - |
| 3 | `mmm-day2-morning-blog` | ⏳ 待创建 | - |
| 4 | `mmm-day2-afternoon-proposal` | ⏳ 待创建 | - |

---

## 📋 设置步骤 | Setup Steps

### 对于每个仓库，执行以下操作：

### Step 1: 访问仓库设置 | Go to Repository Settings

```
https://github.com/Making-More-Makers/[仓库名称]/settings
```

**快速链接 | Quick Links:**
- [mmm-day1-morning-intro/settings](https://github.com/Making-More-Makers/mmm-day1-morning-intro/settings)
- [mmm-day1-afternoon-ctf/settings](https://github.com/Making-More-Makers/mmm-day1-afternoon-ctf/settings) *(创建后)*
- [mmm-day2-morning-blog/settings](https://github.com/Making-More-Makers/mmm-day2-morning-blog/settings) *(创建后)*
- [mmm-day2-afternoon-proposal/settings](https://github.com/Making-More-Makers/mmm-day2-afternoon-proposal/settings) *(创建后)*

---

### Step 2: 启用 Template Repository | Enable Template Repository

1. 在 Settings 页面顶部找到 **"General"** 标签（默认页面）
2. 向下滚动到 **"Template repository"** 部分
3. 勾选 ☑️ **"Template repository"** 复选框
   ```
   ☑️ Template repository
   
   When selected, this repository can be used as a template by anyone.
   Forks of template repositories don't include the history of the template.
   ```
4. 页面会自动保存

---

### Step 3: 验证 | Verify

1. 返回仓库主页：`https://github.com/Making-More-Makers/[仓库名称]`
2. 检查仓库名称旁边是否显示 `Template` 标签
3. 应该看到类似这样的界面：
   ```
   Making-More-Makers / mmm-day1-morning-intro  [Template]
   ```

---

## 🔐 权限检查 | Permission Check

**确保你有以下权限：**
- ✅ 你是 `Making-More-Makers` 组织的 **Owner** 或 **Admin**
- ✅ 你对每个仓库有 **Admin** 权限

**如果没有权限：**
1. 联系组织所有者
2. 请求将你添加为 Admin
3. 或请求所有者帮你设置模板仓库

---

## 🚀 使用 GitHub CLI (可选) | Using GitHub CLI (Optional)

如果你安装了 GitHub CLI (`gh`)，可以用命令行快速设置：

### 安装 GitHub CLI | Install GitHub CLI

**Windows (使用 winget):**
```powershell
winget install --id GitHub.cli
```

**或访问**: https://cli.github.com/

### 设置命令 | Setup Commands

```bash
# 认证 | Authenticate
gh auth login

# 对每个仓库执行 | For each repository:
gh repo edit Making-More-Makers/mmm-day1-morning-intro --template=true
gh repo edit Making-More-Makers/mmm-day1-afternoon-ctf --template=true
gh repo edit Making-More-Makers/mmm-day2-morning-blog --template=true
gh repo edit Making-More-Makers/mmm-day2-afternoon-proposal --template=true
```

---

## ✅ 设置完成检查清单 | Completion Checklist

### Repository 1: mmm-day1-morning-intro
- [ ] 标记为 Template repository
- [ ] 仓库主页显示 `Template` 标签
- [ ] 在 GitHub Classroom 中可以选择此仓库

### Repository 2: mmm-day1-afternoon-ctf
- [ ] 仓库已创建
- [ ] 内容已推送
- [ ] 标记为 Template repository
- [ ] 在 GitHub Classroom 中可以选择此仓库

### Repository 3: mmm-day2-morning-blog
- [ ] 仓库已创建
- [ ] 内容已推送
- [ ] 标记为 Template repository
- [ ] 在 GitHub Classroom 中可以选择此仓库

### Repository 4: mmm-day2-afternoon-proposal
- [ ] 仓库已创建
- [ ] 内容已推送
- [ ] 标记为 Template repository
- [ ] 在 GitHub Classroom 中可以选择此仓库

---

## 🎓 在 GitHub Classroom 中使用 | Using in GitHub Classroom

设置完成后，在创建作业时：

1. **Create a new assignment**
2. 在 "Add a template repository" 步骤
3. 选择 `Making-More-Makers/[template-name]`
4. 你应该能看到带有 `Template` 标签的仓库

---

## 🆘 常见问题 | Troubleshooting

### 问题: "I don't see the Template repository option"
### Problem: 看不到 "Template repository" 选项

**原因 | Reason:**
- 你没有仓库的 Admin 权限

**解决方案 | Solution:**
1. 检查你的权限：Settings → Collaborators
2. 确保你是组织的 Owner 或 Admin
3. 联系组织所有者获取权限

---

### 问题: "Starter code repository must be a template"
### Problem: GitHub Classroom 提示必须是模板

**原因 | Reason:**
- 仓库还没有被标记为 Template

**解决方案 | Solution:**
- 按照上面的 Step 2 启用 Template repository
- 刷新 GitHub Classroom 页面

---

### 问题: "I can't find the repository in GitHub Classroom"
### Problem: 在 GitHub Classroom 中找不到仓库

**原因 | Reason:**
- 仓库不在正确的组织中
- 仓库是私有的且你没有访问权限

**解决方案 | Solution:**
1. 确认仓库在 `Making-More-Makers` 组织下
2. 确认仓库是 Public 或你有访问权限
3. 确认仓库已标记为 Template

---

## 📞 需要帮助？ | Need Help?

如果遇到问题：
1. 检查你的 GitHub 权限
2. 确认仓库在正确的组织中
3. 尝试刷新浏览器
4. 查看 GitHub Classroom 文档: https://docs.github.com/en/education/manage-coursework-with-github-classroom

---

## 🎉 完成！ | Done!

设置完成后，你就可以在 GitHub Classroom 中创建作业了！

**下一步:**
1. 访问你的 GitHub Classroom
2. 创建新作业
3. 选择对应的模板仓库
4. 生成邀请链接
5. 与学生分享链接

---

**文档版本**: v1.0  
**更新日期**: 2024-11-20  
**维护者**: Making More Makers Team

