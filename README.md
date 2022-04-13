# 介绍

本项目实现模拟Word软件的开发。开发此软件主要分为如下三个阶段进行。
1. 界面设计开发 

  界面设计开发内容包括多窗体MDI程序框架的建立，菜单设计，工具栏设计，工具按钮和状态栏的帮助提示文本，多个文档子窗口的管理和控制等。

2. 文本编辑功能实现

   文本编辑功能实现主要包括文件的建立、打开和保存，文本的剪切、复制和粘贴，操作撤销和恢复等这些最基本的文档编辑功能。

3. 排版美化功能实现

   排版美化功能实现包括字体选择，字形、字号和文字颜色的设置，文档段落标号和编号的添加，段落对齐方式设置等高级功能的实现。


通过上述功能的设计与实现，实现了Word字处理软件的基本功能。

当然对比微软公司的Office Word，其功能要比本项目多，也复杂的多，本项目仅以比较简单易懂的方式介绍一个文字处理软件的设计与实现的流程。其目的在于加深对Windows可视化编程的理论、方法和基础知识的理解，掌握使用C++语言进行设计的基本思路和方法

# 基本功能
- 基本框架实现：建立MDI程序框架、菜单系统设计、工具栏设计、子窗口管理
- 基本编辑功能实现：打开文件、保存文件、文本操作
- 文档排版美化功能实现：字体格式设置、段落对齐设置、颜色设置、段落标号、编号、文档打印与预览

# 页面效果

## 总界面

![image-20220413113117027](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113117027.png)

## 菜单页面

![image-20220413113350029](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113350029.png)

### 编辑菜单

![image-20220413113413926](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113413926.png)

### 格式菜单

![image-20220413113450682](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113450682.png)

### 窗口菜单

![image-20220413113523684](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113523684.png)

### 帮助菜单

![image-20220413113536296](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113536296.png)

## 工具栏设计

### 文件工具条

![image-20220413113707726](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113707726.png)

![image-20220413113722381](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113722381.png)

![image-20220413113728644](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113728644.png)

![image-20220413113734927](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113734927.png)

![image-20220413113742259](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113742259.png)

### 格式工具条

![image-20220413113803823](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113803823.png)

![image-20220413113810063](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113810063.png)

![image-20220413113816054](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113816054.png)

![image-20220413113821578](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113821578.png)

![image-20220413113826597](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113826597.png)

![image-20220413113831786](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113831786.png)

![image-20220413113836818](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113836818.png)

![image-20220413113841942](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113841942.png)

![image-20220413113846518](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113846518.png)

### 编辑工具条

![image-20220413113900828](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113900828.png)

![image-20220413113905935](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113905935.png)

![image-20220413113911772](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113911772.png)

![image-20220413113916316](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113916316.png)

![image-20220413113920924](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113920924.png)

![image-20220413113925628](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113925628.png)

### 组合选择栏

![image-20220413113939493](https://cdn.jsdelivr.net/gh/Vstay97/Img_storage@master/project/college/word/image-20220413113939493.png)



