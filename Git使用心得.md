# Git使用心得

`**git init  ##初始化本地仓库**`

`**Git clone [url] ##克隆远程仓库**`

<!--生成ssh公匙 ：ssh-keygen -t rsa -C "1577628224@qq.com"     ##连按3下回车-->

<!--cat ~/.ssh/id_rsa.pub ##查看ssh-->

`**Git  add .   ##（跟踪）**`

`**git status   ##查看本地与暂存区别**`

`**git commit 555.txt -m 提交555    ##将暂存区内容添加到本地仓库中 ，并添加备注信息**`

`**git remote**   **##查看有无源**` 

`**##若无源： 添加远程 Git 仓库   git remote add origin**`  

`**git push -u origin master   ##提交到远程仓库**`

<!--本地的代码和远程仓库的代码不一致用git pull --rebase origin master 完美解决-->

