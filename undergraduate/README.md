## 大纲

```
c++
└── chapter_1 -- 第一章 简介
     └── section_1 -- 第一节 语言特点
          ├── example1.cpp -- 标准的输入输出
          ├── example2.cpp -- 强制类型转换示例
          ├── example3.cpp -- 定义带默认值的函数
          ├── example4.cpp -- 引用的定义与使用
          ├── example5.cpp -- 对引用进行初始化
          ├── example6.cpp -- 不同的参数传递方式
          ├── example7.cpp -- 引用作为函数返回值
          ├── example8.cpp -- 常量说明示例
          ├── example9.cpp -- 字符串成员函数的使用
          ├── example10.cpp -- 字符串成员函数的使用
          ├── practice1.cpp -- 练习1
          └── practice2.cpp -- 练习2
├── chapter_2 -- 第二章 面向对象概念
     ├── section_1 -- 第一节 认识类
          └── myDate.cpp -- 类定义 
     ├── section_2 -- 第二节 访问对象的成员
          └── student.cpp -- 访问对象的成员三种方式
     ├── section_3 -- 第三节 成员的可访问范围
          └── visit.cpp -- 成员的可访问范围    
     ├── section_4 -- 第四节 标识符的作用域与可见性
          └── scope.cpp -- 标识符的作用域与可见性  
     └── practice -- 练习
          ├── practice2_1.cpp 练习1
          ├── practice2_2.cpp 练习2
          ├── practice2_3.cpp 练习3
          └── practice2_4.cpp 练习4
├── chapter_3 -- 第二章 类和对象进阶
     ├── section3_1 -- 第一节 构造函数
          ├── A.cpp -- 简单的构造函数和析构函数 
          └── Student.cpp -- 对象数组使用默认构造函数初始化
     └── section3_2 -- 第二节 析构函数
          └── Samp.cpp -- 析构函数 p107程序填充 
     └── section3_3 -- 第三节 类的静态成员
          ├── Static.cpp -- 自动变量和静态变量的定义和使用
          └── ClassA.cpp -- 静态成员的使用
     └── section3_4 -- 第四节 变量及对象的生存期和作用域
          ├── Test3_4_1.cpp -- 变量生存期和作用域
          └── Test3_4_2.cpp -- 变量生存期和作用域2
     └── section3_5 -- 第五节 常量成员和常引用成员
          ├── Simple3_5_1.cpp -- 调用常量成员与普通成员函数(P119)
          └── ConstClass3_5_2.cpp -- 常量成员变量及变量成员函数的使用(P121)
     └── section3_6 -- 第六节 成员对象和封闭类
          ├── CType3_6_1.cpp -- 封闭类的定义(P124)
          └── CType3_6_2.cpp -- 封闭类对象的创建和消亡
     └── section3_7 -- 第七节 友元
          ├── Pixel3_7_1.cpp --  友元函数的声明
          ├── MyComplex3_7_2.cpp -- 类成员函数实现复数类操作
          ├── MyComplex3_7_3.cpp -- 友元函数实现复数类操作
          └── MyComplex3_7_4.cpp -- 友元类
     └── section3_8 -- 第八节 this指针
          └── MyComplex3_8_1.cpp -- this的使用
├── chapter_4 -- 第四章
     ├── section4_1 第一节 运算符重载的概念
          ├── MyComplex4_1_1.cpp 为类重载运算符"+" 和 "-"
          └── MyComplex4_1_2.cpp 重载为友元函数
     ├── section4_2 第二节 重载赋值运算符
          ├── MyComplex4_2_1.cpp 重载赋值运算符
          ├── Pointer4_2_2.cpp 浅拷贝
          └── Pointer4_2_3.cpp 深拷贝 
     ├── section4_3 第三节 重载流插入运算符和流提取符
          ├── MyComplex4_3_1.cpp 流插入运算符和流提取运算符重载为友元
          └── MyComplex4_3_2.cpp 流插入运算符和流提取运算符重载为成员函数
     ├── section4_4 第四节 重载强制类型转换运算符
          └── MyComplex4_4_1.cpp 重载强制类型转换运算符double
     └── section4_5 第五节 重载自增、自减运算符
          ├── CDemo4_5_1.cpp 自增运算符重载为成员函数，自减函数重载为友元函数
          └── CDemo4_5_2.cpp 自增、自减运算符重载为成员函数
├── chapter_5 -- 第五章 类的继承与派生
     ├── section5_1 第一节 类的继承与派生
          ├── BaseClass5_1_1.cpp 派生类改变基类成员的访问权限(p179)
          ├── Base5_1_2.cpp 派生类继承了友元函数
          ├── Base5_1_3.cpp 派生关系中的静态成员
          ├── Base5_1_4.cpp 访问基类和派生类成员的方式
          ├── Base5_1_2.cpp 类之间的访问示例
          ├── Base5_1_2.cpp 派生类继承了友元函数
          └──
     ├── section5_2
          ├── 
          └── 
     ├── section5_3
          ├──
          └──
     ├── section5_4
          ├──
          └──
     ├── section5_5
          ├──
          └──
     └── section5_6
          ├──
          └──
├── chapter_6 -- 第六章
     ├── section6_1
          ├──
          └──
     ├── section6_2
          ├──
          └──
     ├── section6_3
          ├──
          └──
     ├── section6_4
          ├──
          └──
     └── section6_5
          ├──
          └──
├── chapter_7 -- 第七章
     ├── section7_1
          ├──
          └──
     ├── section7_2
          ├──
          └──
     ├── section7_3
          ├──
          └──
     ├── section7_4
          ├──
          └──
     └── section7_5
          ├──
          └──
├── chapter_8 -- 第八章
     ├── section8_1
          ├──
          └──
     ├── section8_2
          ├──
          └──
     ├── section8_3
          ├──
          └──
     └── section8_4
          ├──
          └──
└── chapter_9 -- 第九章
     ├── section9_1
          ├──
          └──
     └── section9_2
          ├──
          └──
```