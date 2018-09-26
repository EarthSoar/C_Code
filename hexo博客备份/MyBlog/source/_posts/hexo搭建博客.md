---
title: Hexo+GitHub打造个人博客
tags: hexo
categories: others
---
## 1.准备工作
1.安装nodejs
去官网下载nodejs安装(推荐安装4.x),安装之后在命令行 node -v,如果成功说明node环境ok,不成功就去环境变量配置一下.
2.安装hexo
使用命令 npm install hexo -g,执行hexo -v 查看版本,本教程适合3.1.1以上版本
3.安装git
<!-- more -->
去官网下载git安装
4.配置git
配置ssh私钥,上传到github上
## 2.github-pages的说明
- github有两种主页,一种是github-page(个人主页),一种是项目主页,本教程针对个人主页
- github-page需要将hexo博客发布到repository的master(主干)即可
- github的个人主页要求repository的名称和username一致，加入username是tom，则repository的名称为tom.github.io
## 3.使用hexo写博客
```
- 新建一个文件夹myblog,
- 右键git bash here使用git的shell
- 在shell中输入hexo init,回车执行
- 在shell中输入hexo g ,回车
- 在shell中hexo s,回车
- 去浏览器访问http://localhost:4000,访问到主页,然后在shell中ctrl c停止
- 在shell中hexo new "first-blog",回车
- 在shell中hexo g ,回车
- 在shell中hexo s ,回车,在访问
- ok,在本地测试就没问题了
```
## 4.发布到github
打开项目根部录下的.config.yml,找到deploy,修改如下:
```
deploy:
 - type: git
   repo: git@github.com:yourname/yourname.github.io.git
     branch: branch
  message: message
```
## 5.常用命令

```
hexo n == hexo new
hexo g == hexo generate
hexo s == hexo server
hexo d == hexo deploy
hexo clean  删除public文件夹

```
## 6.常见问题
```
发布不上去：
npm install hexo-deployer-git --save 安装依赖包
```
## 7.具体设置
hexo有2种_config.yml文件，一个是根目录下的全局的_config.yml，一个是各个theme下的；
- 修改主题

修改_config.yml中的theme: landscape改为theme: yilia，然后重新执行hexo g来重新生成。
如果出现一些莫名其妙的问题，可以先执行hexo clean来清理一下public的内容，然后再来重新生成和发布。

全局的_config.yml这里面都是一些全局配置，每个参数的意思都比较简单明了，所以就不作详细介绍了。
需要特别注意的地方是，冒号后面必须有一个空格，否则可能会出问题。

本文参考了博客：[参考博客](https://geeksblog.cc/hexo-githup-blog.html)