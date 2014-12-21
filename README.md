#Hexagon

Hexagon是新一代面向对象的高级编程语言。
它将具有漂亮的语法特性以及极其实用的新奇功能。

##1 语法

它的语法和python有些类似，优雅的缩进控制结构使编写代码成为一种享受。

###1.1 表达式

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

###1.2 语句

一个语句能够产生一些效果，如:
```
print("Hello, world!")              //打印"Hello, world!"
x = 13                              //把13赋给x
x++                                 //等同于x = x + 1 , x自增
finalize x                          //准备释放x的内存空间
```
**要注意，Hexagon的语句以换行结尾，不需要分号。**

###1.3 结构

结构可以产生代码片段的分段性。
一个结构由结构头，结构体，以及可选的分支结构头构成。如:
```
Class MyFirstClass                              //结构头
    str myFirstFunction()           //结构体    //又一个结构头
        return "Hello, world! (Again)"          //结构体    //结构体
    print(myFirstFunction)                      //结构体
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

###1.4 注释

果然还是入坑了……"#"符号留作他用。
```
...     \\这是一个行注释
\\print("I am being commented!") <-- 被注释的代码不会被执行。
```

##2 预定义类型

###2.1 基础类型

####2.1.1 int

在前面我们使用到了int类型，这是一个基础类型，代表Integer，意思是整数。
取值为 -2 147 483 648~2 147 483 647 。

####2.1.2 byt

代表Byte，只占用1个字节的整数。
取值为0~255。

####2.1.3 bol

代表Boolean，表示一个逻辑值，取值为True(真)\False(假)。

####2.1.4 dec

代表Decimal，表示5e-324~1.7e+308的小数。

####2.1.5 cha

代表Character，代表一个Unicode字符，取值U+0000~U+ffff。

###2.2 动态基础类型

就是动态扩张的基础类型。

####2.2.1 str

由0或多个cha型变量组成的字符串。动态占用内存。

####2.2.2 num

代表Numeric，表示一维数轴上所有的数，支持循环节。

###2.3 总超类object

任何类型的基类，所有类（包括基础类）都从这里继承。

###2.4 自定类型

需要自己进行声明才能实例化的类型:

+ 类类型 Class
+ 数组类型 Array
+ 枚举类型 Enum
+ 接口类型 Interface

这些都需要一定的结构在后面才能起作用。

##3 标准

<!--
后面再慢慢添加这块。
!-->

###3.1 标识符

标识符的正则表达式:
```
[A-Za-z_][A-Za-z_0-9]*
```
开头是字母与下划线(_),之后可以用字母和数字。

有一些关键字不可在标识符中出现。

```
air     \\合适的标识符
a$ari   \\不合法:$不可用于表示
1ras    \\不合法:用数字打头
x1      \\合适的标识符
```

###3.2 关键字列表
以下关键字不可在标识符中出现:
```

abstract
base bol break byt
case catch cha class continue
dec default do
else enum event extends
false finally for foreach
if in int interface is
new null
object
private protected public
return returns
static str switch
this throw throws true try
void

```
<!-- 仍需增加 !-->

###3.3 类
类型的定义如下:
```
[ 可见性标识符 ] [ 权限标识符 ] Class 标识符 [ extends 超类标识符 ] [ impents 接口1, 接口2, ... ]
    类体
```
如:
```
Public Class MySecondClass
    ...
```
或:
```
Private Readonly Class ThisIsAPrivateClass extends MySuperClass
    ...
```
####3.3.1 成员变量

变量声明如下:
```
[可见性标识符] [权限表识符] 类型 变量
```
一个变量可以被赋值。
```
int i
i = 1
```
而这两个语句可以连写成
```
int i = 1
```
的形式。

变量可以被当作值来使用:
```
int i = 1
print(i)
print(i + i)
```
得到
```
1
2
```
。

####3.3.2 成员方法
成员方法声明如下:
```
[可见性标识符] [权限表识符] 类型 方法名([类型 参数1 [= 默认值] , [参数2] [= 默认值] , [参数3] [= 默认值] , ...])
    方法体
    [return 返回值]
```
如:
```
Private int myFirstFunction(int i = 3)
    return i * 2
print(myFirstFunction())
print(myFirstFunction(5))
```
得到
```
6
10
```
####3.3.3 成员属性
_待添加_
###3.4 运算符
####3.4.1 +
将左右相加。
####3.4.2 -
将左侧减去右侧。
####3.4.3 *
将左右相乘。
####3.4.4 /
将左侧除以右侧。
####3.4.5 \
将左侧整除右侧，即在/的基础上取整。
####3.4.6 %
求左侧整除右侧的余数。
####3.4.7 <
如果左侧小于右侧则为真。
####3.4.8 >
如果左侧大于右侧则为真。
####3.4.9 ==
如果左侧等于右侧则为真。

####3.4.10 ++
#####前置
变量值+1，保存，返回变量新值
#####后置
变量值+1，保存，返回变量原值

####3.4.11 --
#####前置
变量值-1，保存，返回变量新值
#####后置
变量值-1，保存，返回变量原值