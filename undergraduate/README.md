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
          ├── Base5_1_5.cpp 类之间的访问示例
          ├── Base5_1_6.cpp 基类中的成员是私有成员时的访问方式
          ├── Base5_1_7.cpp 基类中保护成员的访问方式
          ├── Base5_1_8.cpp 多重继承下的访问方式
          └── Base5_1_9.cpp 多重继承
     ├── section5_2 第二节 访问控制
          ├── program5_2_1 公有继承访问控制
          ├── program5_2_2 类型兼容规则的使用
          └── program5_2_3 验证使用类型兼容规则的输出结果
     ├── section5_3 第三节 派生类的构造函数和析构
          ├── program5_3_1 基类和派生类的构造函数和析构函数
          ├── program5_3_2 调用基类和派生类的构造函数、析构函数、成员函数
          ├── program5_3_3 派生类中的复制构造函数
          ├── program5_3_4 赋值运算符的重载及使用
          └── program5_3_5 多重继承
     ├── section5_4 第四节 类之间的关系
          ├── program5_4_1 封闭类的构造函数
          └── program5_4_2 互包含的类
     ├── section5_5 第五节 多层次的派生
          └── program5_5_1 多级派生时构造函数的调用
     └── section5_6 第六节 基类与派生类指针的相互转换
          └── program5_6_1 使用指针的情况
├── chapter_6 -- 第六章 多态与虚函数
     ├── section6_1 第一节 多态的基本概念
          ├── program6_1_1 通过基类指针实现多态
          ├── program6_1_2 用基类指针访问基类对象及派生类对象
          ├── program6_1_3 基类引用实现多态
          └── program6_1_4 多态机制下对象存储控件的大小
     ├── section6_2 第二节 多态实例
          ├── program6_2_1 使用多态处理图像
          └──
     ├── section6_3 第三节 多态的使用
          ├── program6_3_1 在成员函数中调用虚函数
          ├── program6_3_2 在构造函数与析构函数中调用虚函数
          └── program6_3_3 多态与非多态的对比
     ├── section6_4 第四节 虚析构函数
          ├── program6_4_1 不使用虚析构函数的情况
          └── program6_4_2 使用虚析构函数的情况
     └── section6_5 第五节 纯虚函数和抽象类
          ├── program6_5_1 抽象类示例
          └── program6_5_2 虚基类
├── chapter_7 -- 第七章 输入/输出流
     ├── section7_1 第一节 流类简介
     ├── section7_2 第二节 标准流对象
          ├── program7_2_1 将标准输出cout重定向到文件
          ├── program7_2_2 将标准输入重定向为文件
          ├── program7_2_3 将从键盘输入的数据进行累加
          └── 将标准输入重定向为文件并判断文件状态
     ├── section7_3 第三节 控制I/O格式
          ├── program7_3_1 使用流操纵符控制整数输出
          ├── program7_3_2 使用流操纵符控制浮点数输出
          ├── program7_3_3 通过setw()控制输入格式
          └── program7_3_4 通过setiosflags()设置标志字进行格式控制
     ├── section7_4 第四节 调用cout的成员函数
          ├── program7_4_1 使用cout中的成员函数控制输出格式
          └── program7_4_2 使用cout()函数
     └── section7_5 第五节 调用cin的成员函数
          ├── program7_5_1 采用EOF判断输入是否结束
          ├── program7_5_2 getline()函数功能的演示
          ├── program7_5_3 从输入的字符串中提取电话号码
          └── program7_5_4 日期格式的转换
├── chapter_8 -- 第八章 文件操作
     ├── section8_1 第一节 文件基本概念和文件流类
     ├── section8_2 第二节 打开和关闭文件
          ├── program8_2_1 建立流对象，然后调用open()函数连接外部文件
          └── program8_2_2 调用流类带参数的构造函数打开文件
     ├── section8_3 第三节 文件读写操作
          ├── program8_3_1 对文本文件score.txt进行输入/输出
          ├── program8_3_2 读入学生成绩文件score.txt并显示内容
          ├── program8_3_3 读入文本文件，加上行号后显示内容
          ├── program8_3_4 对文本文件score.txt进行输入/输出
          ├── program8_3_5 对文本文件的内容排序，将结果输出到另一个文件
          ├── program8_3_6 用二进制文件保存学生信息
          ├── program8_3_7 向二进制文件中追加数据
          ├── program8_3_8 从二进制文件中读取数据
          └── program8_3_9 文件复制
     └── section8_4 第四节 随机访问文件
          ├── program8_4_1文件读操作过程中位置指针的变化
          └── program8_4_2读取二进制学生成绩文件，查找最高分和最低分的学生...
└── chapter_9 -- 第九章 函数模板与类模板
     ├── section9_1 函数模板 
          ├── program9_1_1 定义绝对值的函数模板并运行不同的调用
          ├── program9_1_2 定义对象交换的函数模板
          ├── program9_1_3 对象排序程序
          ├── program9_1_4 重载函数模板
          └── program9_1_5 函数调用匹配顺序
     └── section9_2 类模板
          ├── program9_2_1 类模板
          ├── program9_2_2 类模板
          ├── program9_2_3 在类模板中使用函数模板
          ├── program9_2_4 类模板中使用静态成员
          ├── program9_2_5 使用普通参数的类模板
          ├── program9_2_6 普通类继承模板类
          ├── program9_2_7 模板类继承普通类
          ├── program9_2_8 类模板集成类模板
          └── program9_2_9 类模板机场模板类
```