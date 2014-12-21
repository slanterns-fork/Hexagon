# Hexagon
Hexagon是新一代面向对象的高级编程语言。
它将具有漂亮的语法特性以及极其实用的新奇功能。
## 语法
它的语法和python有些类似，优雅的缩进控制结构使编写代码成为一种享受。
### 表达式
一个表达式看起来像这样:
```
3 + 5
```
或者这样
```
x + 1
```
以及
```
12 == 15                            //返回False
"Hello," & " world" & "!"           //返回"Hello, world!"
height * 2                          //返回变量height的两倍
13                                  //返回13
```
都是表达式。
单个的表达式并没有实际作用。
### 语句
一个语句能够产生一些效果，如:
```
print("Hello, world!")              //打印"Hello, world!"
x = 13                              //把13赋给x
x++                                 //等同于x = x + 1 , x自增
finalize x                          //准备释放x的内存空间
```
**要注意，Hexagon的语句以换行结尾，不需要分号。**、
### 结构
结构可以产生代码片段的分段性。
一个结构由结构头，结构体，以及可选的分支结构头构成。如:
```
Class MyFirstClass                              //结构头
    Function myFirstFunction() returns string   //结构体    //又一个结构头
        return "Hello, world! (Again)"          //结构体    //结构体
    Function main(string[] args)                //结构体    //再来一个结构头
        print(myFirstFunction)                  //结构体    //结构体
```
*结构体相对于结构头要使用一个制表符来表明。*
有一些结构有分支结构头，如:
```
If i > 0        //结构头
    i = i % m   //结构体
Else            //分支结构头
    return i    //结构体
```
无论使用什么结构，制表符是必需的。
## 基础类型
在前面我们使用到了int类型，这是一个基础类型，代表Integer，意思是整数。
基础类型如下。
```

|| *Year* || *Temperature (low)* || *Temperature (high)* ||
|| 1900 || -10 || 25 ||
|| 1910 || -15 || 30 ||
|| 1920 || -10 || 32 ||

```
