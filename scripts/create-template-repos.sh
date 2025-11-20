#!/bin/bash

# GitHub Classroom Template Repository Creation Script
# 创建GitHub Classroom模板仓库的自动化脚本
#
# Usage: ./scripts/create-template-repos.sh
# 使用方法: ./scripts/create-template-repos.sh

set -e  # Exit on error

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Configuration
ORG_NAME="Making-More-Makers"
BASE_DIR="$(pwd)"
TEMP_DIR="${BASE_DIR}/temp-template-repos"

# Assignment mapping: source_dir:repo_name
declare -A ASSIGNMENTS=(
    ["day1-morning-intro"]="mmm-day1-morning-intro"
    ["day1-afternoon-hardware-ctf"]="mmm-day1-afternoon-ctf"
    ["assignment-day2-blog"]="mmm-day2-morning-blog"
    ["day2-afternoon-project-proposal"]="mmm-day2-afternoon-proposal"
)

# Template repository notice to add to README
TEMPLATE_NOTICE='---
> **📚 This is a GitHub Classroom Assignment Template**  
> **这是一个GitHub Classroom作业模板**
> 
> **For Students | 给学生:**  
> Accept the assignment via the invitation link provided by your instructor.  
> 通过讲师提供的邀请链接接受作业。
> 
> **For Instructors | 给教师:**  
> This repository is used as a template for GitHub Classroom assignments.  
> 此仓库用作GitHub Classroom作业的模板。
---

'

echo -e "${BLUE}========================================${NC}"
echo -e "${BLUE}GitHub Classroom Template Repo Creator${NC}"
echo -e "${BLUE}GitHub Classroom 模板仓库创建工具${NC}"
echo -e "${BLUE}========================================${NC}"
echo ""

# Check if we're in the right directory
if [ ! -d "assignments" ]; then
    echo -e "${RED}Error: assignments directory not found!${NC}"
    echo -e "${RED}错误：未找到assignments目录！${NC}"
    echo -e "${YELLOW}Please run this script from the repository root.${NC}"
    echo -e "${YELLOW}请从仓库根目录运行此脚本。${NC}"
    exit 1
fi

# Check for git
if ! command -v git &> /dev/null; then
    echo -e "${RED}Error: git is not installed!${NC}"
    echo -e "${RED}错误：未安装git！${NC}"
    exit 1
fi

echo -e "${YELLOW}This script will create 4 template repositories:${NC}"
echo -e "${YELLOW}此脚本将创建4个模板仓库：${NC}"
echo ""
for source_dir in "${!ASSIGNMENTS[@]}"; do
    repo_name="${ASSIGNMENTS[$source_dir]}"
    echo -e "  ${GREEN}✓${NC} ${source_dir} → ${ORG_NAME}/${repo_name}"
done
echo ""

# Create temp directory
echo -e "${BLUE}Creating temporary directory...${NC}"
mkdir -p "$TEMP_DIR"

# Function to create a template repository
create_template_repo() {
    local source_dir=$1
    local repo_name=$2
    local source_path="${BASE_DIR}/assignments/${source_dir}"
    local temp_repo_path="${TEMP_DIR}/${repo_name}"
    
    echo ""
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}Processing: ${repo_name}${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    # Check if source directory exists
    if [ ! -d "$source_path" ]; then
        echo -e "${RED}Error: Source directory not found: ${source_path}${NC}"
        echo -e "${RED}错误：源目录不存在：${source_path}${NC}"
        return 1
    fi
    
    # Create temp repo directory
    echo -e "${YELLOW}1. Creating temporary repository...${NC}"
    rm -rf "$temp_repo_path"
    mkdir -p "$temp_repo_path"
    
    # Copy assignment contents
    echo -e "${YELLOW}2. Copying assignment contents...${NC}"
    cp -r "$source_path"/* "$temp_repo_path/"
    
    # Initialize git repository
    echo -e "${YELLOW}3. Initializing git repository...${NC}"
    cd "$temp_repo_path"
    git init
    git branch -M main
    
    # Add template notice to README
    echo -e "${YELLOW}4. Adding template notice to README...${NC}"
    if [ -f "README.md" ]; then
        # Create temp file with notice + original content
        echo -e "$TEMPLATE_NOTICE" > README.tmp
        cat README.md >> README.tmp
        mv README.tmp README.md
    fi
    
    # Create .gitignore if it doesn't exist
    if [ ! -f ".gitignore" ]; then
        echo -e "${YELLOW}5. Creating .gitignore...${NC}"
        cat > .gitignore << 'EOF'
# OS files
.DS_Store
Thumbs.db
desktop.ini

# IDE files
.vscode/
.idea/
*.swp
*.swo
*~

# Build artifacts
*.o
*.exe
*.out

# Logs
*.log

# Temporary files
*.tmp
.temp/
temp/

# Node modules (if using any web tools)
node_modules/

# Python
__pycache__/
*.py[cod]
*$py.class
.Python
venv/
ENV/

# Arduino
*.hex
*.elf
EOF
    fi
    
    # Stage all files
    echo -e "${YELLOW}6. Staging files...${NC}"
    git add .
    
    # Commit
    echo -e "${YELLOW}7. Creating initial commit...${NC}"
    git commit -m "Initial template: ${repo_name}

- Migrated from main course repository
- Added GitHub Classroom template notice
- Ready for use as assignment template
- 从主课程仓库迁移
- 添加了GitHub Classroom模板说明
- 准备作为作业模板使用"
    
    # Add remote (but don't push yet)
    echo -e "${YELLOW}8. Adding remote origin...${NC}"
    git remote add origin "git@github.com:${ORG_NAME}/${repo_name}.git"
    
    echo -e "${GREEN}✓ Repository prepared: ${temp_repo_path}${NC}"
    
    cd "$BASE_DIR"
}

# Process each assignment
for source_dir in "${!ASSIGNMENTS[@]}"; do
    repo_name="${ASSIGNMENTS[$source_dir]}"
    create_template_repo "$source_dir" "$repo_name"
done

echo ""
echo -e "${BLUE}========================================${NC}"
echo -e "${GREEN}All repositories prepared!${NC}"
echo -e "${GREEN}所有仓库已准备完成！${NC}"
echo -e "${BLUE}========================================${NC}"
echo ""

echo -e "${YELLOW}Next steps | 下一步:${NC}"
echo ""
echo -e "${BLUE}1. Create empty repositories on GitHub | 在GitHub上创建空仓库:${NC}"
echo ""
for source_dir in "${!ASSIGNMENTS[@]}"; do
    repo_name="${ASSIGNMENTS[$source_dir]}"
    echo -e "   ${GREEN}→${NC} https://github.com/organizations/${ORG_NAME}/repositories/new"
    echo -e "     Name: ${repo_name}"
    echo -e "     Description: GitHub Classroom template for ${source_dir}"
    echo -e "     Visibility: Private (recommended)"
    echo -e "     ${YELLOW}☑️ Check 'Template repository'${NC}"
    echo ""
done

echo -e "${BLUE}2. Push to GitHub | 推送到GitHub:${NC}"
echo ""
echo -e "   Run these commands | 运行以下命令:"
echo ""
for source_dir in "${!ASSIGNMENTS[@]}"; do
    repo_name="${ASSIGNMENTS[$source_dir]}"
    temp_repo_path="${TEMP_DIR}/${repo_name}"
    echo -e "   ${GREEN}# ${repo_name}${NC}"
    echo -e "   cd \"${temp_repo_path}\""
    echo -e "   git push -u origin main"
    echo ""
done

echo -e "${BLUE}3. Configure as templates | 配置为模板:${NC}"
echo ""
echo -e "   For each repository | 对每个仓库:"
echo -e "   Settings → ☑️ Template repository"
echo ""

echo -e "${BLUE}4. Clean up temporary files (optional) | 清理临时文件（可选）:${NC}"
echo ""
echo -e "   ${YELLOW}# After pushing all repos, you can clean up:${NC}"
echo -e "   rm -rf \"${TEMP_DIR}\""
echo ""

echo -e "${GREEN}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
echo -e "${GREEN}✓ Done! Template repositories are ready to push.${NC}"
echo -e "${GREEN}✓ 完成！模板仓库已准备好推送。${NC}"
echo -e "${GREEN}━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━${NC}"
echo ""
echo -e "${YELLOW}⚠️  Note | 注意:${NC}"
echo -e "${YELLOW}The original assignments in this repository are PRESERVED.${NC}"
echo -e "${YELLOW}主仓库中的原始assignments已保留。${NC}"
echo -e "${YELLOW}Template repos are independent copies for GitHub Classroom.${NC}"
echo -e "${YELLOW}模板仓库是用于GitHub Classroom的独立副本。${NC}"

