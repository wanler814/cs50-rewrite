isdigit 参数类型不匹配 —— 要单个 char，不是 char*
strlen 不能用在 std::string 上 —— 用 .size()；别把 C 函数喂给 C++ 类
cin>> 和 getline 的区别 —— 前者遇空格停，后者读整行
git push 报 src refspec main does not match any —— 没 commit 就没分支
VS Code 源代码管理面板会卡 —— 用 git status 判断真相
git add .
git commit -m "补充 errors.md：C++ 入门踩坑记录"
git push(每次提交时要做的事情)