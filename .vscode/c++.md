# c++自学笔记

### 编译程序

#### [vscode](https://code.visualstudio.com/)

-

#### 1.main 函数

##### main.cpp

```c++
#include <iostream>
using namespace std;
int main()
{

    return 0;

}
```

#### 2.注释

1.单行注释:

```c++

//我是单行注释
```

2.多行注释:

```c++

/*

  我是多行注释

*/
```

#### 变量的创建语法

```c++

#include <iostream>
using namespace std;
int main()
{
    //变量的定义
    //语法规则:数据类型 变量名 = 初始值
    int a = 10 ;
    cout >> a >> endl;
    system("pause");
    return 0;
}
```

#### 常量

- 作用

  - 用于记录程序中不可更改的数据

- c++定义常量的两种方式

  - #define 宏常量

    - 语法:#define 常量名 常量值

    - ==通常在文件上方定义==,表示一个常量

```c++
#include <iostream>
using namespace std;
#define Day 7
int main()
{
    cout >> "一周有" >> Day >> "天" >> endl ;
    system("pause");
    return 0;
}
```

- const 修饰的变量

  - 语法:const 数据类型 常量名 = 常量值

  - ==通常在变量定义前加关键字 const== ,修饰该变量为常量,不可修改

```c++
#include <iostream>
using namespace std;
int main()
{
    const int month = 12;
    cout >> "一年有" >> month >> "月" >> endl;
    system("pause");
    return 0;
}
```

#### 关键字

- 作用

  - 关键字是 c++中预先保留的单词(标识符)

  - 在定义变量或者常量的时候,不要用关键字

- 关键字如下

| ams        | do           | if               | return      | typedef  |
| ---------- | ------------ | ---------------- | ----------- | -------- |
| auto       | double       | inline           | short       | typeid   |
| bool       | dynamic_cast | int              | signed      | typename |
| break      | else         | long             | sizeof      | union    |
| case       | enum         | mutable          | static      | unsigned |
| catch      | explicit     | namespace        | static_cast | using    |
| char       | export       | new              | struct      | virtual  |
| class      | extern       | operator         | switch      | void     |
| const      | false        | private          | template    | volatile |
| const_cast | float        | protected        | this        | wchar_t  |
| continue   | for          | public           | true        |          |
| delete     | goto         | reinterpret_cast | try         |          |

```
提示:在给变量或者常量起名称的时候,不要用c++关键字,否则会产生歧义.
```

#### 标识符命名规则

- 作用

  - c++规定给标识符(变量,常量)命名时的一套规则

    - 标识符不能是关键字

    - 标识符只能由字母数字下划线组成

    - 第一个字符必须是字母或下划线

    - 标识符中区分大小写

#### 数据类型

- 数据类型存在的意义:

  - 给变量分配合适的内存空间.

##### 整型

- 作用

  - 整型变量表示的是整数类型的数据

  - c++中能够表示整型的类型有以下几种方式,区别在于所占用的内存空间不同.

| 数据类型            | 占用空间                                               | 取值范围         | 数值                                     |
| ------------------- | ------------------------------------------------------ | ---------------- | ---------------------------------------- |
| short(短整型)       | 2 字节                                                 | (-2^15~2^15-1)   | -32768~32767                             |
| int(整型)           | 4 字节                                                 | (-2^31 ~ 2^31-1) | -2147483648~2147483647                   |
| long(长整型)        | windows 为 4 字节,linux 为 4 字节(32 位),8 字节(64 位) | (-2^31 ~ 2^31-1) | -2147483648~2147483647                   |
| long long(长长整型) | 8 字节                                                 | (-2^63 ~ 2^63-1) | -9223372036854775808~9223372036854775807 |

#### sizeof 关键字

- 作用

  - 利用 sizeof 关键字可以==统计数据类型所占用内存大小==

  - 语法:sizeof(==数据类型/变量==)

- 示例:

```c++
#include <iostream>
using namespace std;
int main(){
  short num1 = 10;
  int num2 = 20;
  long num3 = 30;
  long long num4 = 40;
  float num5 = 3.14f;
  double num6 = 3.1415;
  cout << "short 类型所占用内存空间为" << sizeof(short) << endl;
  cout << "short 类型所占用内存空间为" << sizeof(num1) << endl;
  //查询short类型所占用内存空间
  cout << "int 类型所占用内存空间为" << sizeof(int) << endl;
  cout << "int 类型所占用内存空间为" << sizeof(num2) << endl;
  //查询int类型所占用内存空间
  cout << "long 类型所占用内存空间为" << sizeof(long) << endl;
  cout << "long 类型所占用内存空间为" << sizeof(num3) << endl;
  //查询long类型所占用内存空间
  cout << "long long 类型所占用内存空间为" << sizeof(long long) << endl;
  cout << "long long 类型所占用内存空间为" << sizeof(num4) << endl;
  //查询long long类型所占用内存空间
  cout << "float 类型所占用内存空间为" << sizeof(float) << endl;
  cout << "float 类型所占用内存空间为" << sizeof(num5) << endl;
  //查询float类型所占用内存空间
  cout << "double 类型所占用内存空间为" << sizeof(double) << endl;
  cout << "double 类型所占用内存空间为" << sizeof(num6) << endl;
  //查询double类型所占用内存空间
  system("pause");
  return 0;
}
```

- 整型结论

  - ==short< int <= long <= long long==

#### 实型(浮点型)

- 作用

  - 用于表示小数

- 浮点型变量分为两种

  - 单精度 float

  - 双精度 double

  - 两者的==区别==在于表示有效的数字范围不同

  * 默认情况下,一个小数,显示的有效数字位 6 位

| 数据类型 | 占用空间 | 有效数字范围     |
| -------- | -------- | ---------------- |
| float    | 4 字节   | 7 位有效数字     |
| double   | 8 字节   | 15-16 位有效数字 |

- 示例

```c++
#include <iostream>
using namespace std;
int main(){
  float num1 = 3.14f;
  //单精度需要在结尾加上"f",否则默认会识别位double类型
  double num2 = 3.1415;

  //科学计数法
  float num3 = 3e2;//3*(10^2),3*(10*10),300
  float num3 = 3e-2;//3*(0.1^2),3*(0.1*0.1),0.03

  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;
  cout << num4 << endl;
  system("pause");
  return 0;
}
```

#### 字符型

- 作用

  - 字符型变量用于显示单个字符

- 语法

```c++
char ch = 'a';
```

- 注意 1

  - 在显示字符型变量时,用==单引号==将字符括起来,不要用双引号

- 注意 2

  - ==单引号内只能有一个字符,不可以是字符串==

- c/c++中字符型变量只占用==一个字节==

- 字符型变量并不是把字符本身放到内存中存储,而是将对应的 ascii 编码放到存储单元

* 示例

```c++
#include <iostream>
using namespace std;
int main(){
  char ch = 'a';
  cout << ch << endl;
  cout << sizeof(char) << endl;
  //常见错误
  //char ch2 = "b";//创建字符串类型变量时,要用单引号
  //char ch3 = 'abc';//创建字符串类型变量时,单引号内只能有一个字符
  //字符型变量值对应ascii编码
  // a = 97
  // A = 65
  cout << (int)ch << endl;//强制转换类型为int
  system("pause");
  return 0;
}
```

- ASCII 码表格
  |ASCII 值|控制字符|ASCII 值|字符|ASCII 值|字符|ASCII 值|字符|
  |-|-|-|-|-|-|-|-|
  |0|NUT|32|(space)|64|@|96|`|
  |1|SOH|33|!|65|A|97|a|
  |2|STX|34|"|66|B|98|b|
  |3|ETX|35|#|67|C|99|c|
  |4|EOT|36|$|68|D|100|d|
  |5|ENQ|37|%|69|E|101|e|
  |6|ACK|38|&|70|F|102|f|
  |7|BEL|39|'|71|G|103|g|
  |8|BS|40|(|72|H|104|h|
  |9|HT|41|)|73|I|105|i|
  |10|LF|42|\*|74|J|106|j|
  |11|VT|43|+|75|K|107|k|
  |12|FF|44|,|76|L|108|l|
  |13|CR|45|-|77|M|109|m|
  |14|SO|46|.|78|N|110|n|
  |15|SI|47|/|79|O|111|o|
  |16|DLE|48|0|80|P|112|p|
  |17|DC1|49|1|81|Q|113|q|
  |18|DC2|50|2|82|R|114|r|
  |19|DC3|51|3|83|S|115|s|
  |20|DC4|52|4|84|T|116|t|
  |21|NAK|53|5|85|U|117|u|
  |22|SYN|54|6|86|V|118|v|
  |23|TB|55|7|87|W|119|w|
  |24|CAN|56|8|88|X|120|x|
  |25|EM|57|9|89|Y|121|y|
  |26|SUB|58|:|90|Z|122|z|
  |27|ESC|59|;|91|[|123|{|
  |28|FS|60|<|92|/|124|||
  |29|GS|61|=|93|]|125|}|
  |30|RS|62|>|94|^|126|~|
  |31|US|63|?|95|\_|127|DEL|

* ASCII 码大致由以下==两部分==组成

  - ASCII 非打印控制字符:ASCII 表上的数字 **0-31** 分配给了控制字符,用于控制像打印机等一些外围设备.

  - ASCII 打印字符:数字 **32-126** 分配给了能在键盘上找到的字符,当查看或打印文档时就会出现.

#### 转义字符

- 作用

  - 用于表示一些==不能显示出来的 ASCII 字符==

  - 现阶段常用的有转义字符有:`\n \\ \t`

| 转义字符 | 含义                              | ASCII 值(十进制) |
| -------- | --------------------------------- | ---------------- |
| \a       | 警报                              | 007              |
| \b       | 退格(BS),将当前位置移到前一列     | 008              |
| \f       | 换页(FF),将当前位置移到本行开头   | 012              |
| \n       | 换行(LF),将当前位置移到下一行开头 | 010              |
| \r       | 回车(CR),将当前位置移到本行开头   | 013              |
| \t       | 水平制表(HT)(跳到下一个 TAB 位置) | 009              |
| \v       | 垂直制表(VT)                      | 011              |
| \\       | 代表一个反斜线字符"\"             | 092              |
| \'       | 代表一个单引号(撇号)字符          | 039              |
| \"       | 代表一个双引号字符                | 034              |
| \?       | 代表一个问号                      | 063              |
| \0       | 数字 0                            | 018              |
| \ddd     | 8 进制转义符,d 范围 0-7           | 3 位 8 进制      |
| \xhh     | 16 进制转义字符,h 范围            | 3 位 16 进制     |


```c++
#include <iostream>
using namespace std;
int main(){
  cout << "hello,word" << endl;
  //换行转义符 \n
  cout << "hello,word\n";
  //水平制表符 \t 作用:可以整齐的输出数据;
  cout << "aaaa\thelloword" << endl;
  cout << "aa\thelloword" << endl;
  cout << "aaaaaa\thelloword" << endl;
  system("pause");
  return 0;
}
```

#### 字符串型

* 作用

  * 用于表示一串字符

* 两种风格

  * c风格字符串:```char 变量名[] = "字符串值"```

  * 示例

    ```c
    #include <iostream>
    using namespace std;
    int main(){
      //char 字符串名[]
      //等号后面 要用双引号
      char str1[] = "hello,word";
      cout << str1 << endl;
      system("pause");
      return 0;
    }
    ```

  ```注意:C风格的字符串要用双引号"```

  * c++风格字符串:```string 变量名 = "字符串值"```

  * 示例

    ```c++
    #include <iostream>
    using namespace std;
    //c++引用字符串时,要引用<string>头文件
    #include <string>
    int main(){
      string str = "hello,word";
      cout << str << endl;
      system("pause");
      return 0;
    }
    ```
#### 布尔类型 bool

* 作用

  * 布尔数据类型代表真或假的值

  * 布尔类型只有两个值

    * true -- 真 (本质是1)

    * false -- 假 (本质是0)

* 示例

```c++
#include <iostream>
using namespace std;
int main()
{
    bool flag = true; //创建变量名flag,值为true(真)
    cout << flag << endl;
    bool flag1 = false; //创建变量名为flag1,值为false(假)
    cout << flag1 << endl;
    cout << "bool类型所占内存空间为:" << sizeof(bool) << endl;
    system("pause");
    return 0;
}
```

#### 数据的输入 cin

* 作用

  * 用于从键盘获取数据

* 关键字 

  * cin

* 语法

  * ```cin >> 变量```

* 示例

```c++
#include <iostream>
using namespace std;
#include <string>
int main()
{
    //整型数据类型输入
    int num = 0;
    cout << "请输入整型变量" << endl;
    cin >> num;
    cout << "整型变量为:" << num << endl;
    //浮点型数据输入
    double num1 = 0;
    cout << "请输入浮点变量" << endl;
    cin >> num1;
    cout << "浮点变量为:" << num1 << endl;
    //字符型数据输入
    char ch = '0';
    cout << "请输入字符变量" << endl;
    cin >> ch;
    cout << "字符变量为:" << ch << endl;
    //字符串型数据输入
    string str = "hello,word";
    cout << "请输入字符串变量" << endl;
    cin >> str;
    cout << "字符串变量为:" << str << endl;
    //布尔型数据输入
    bool flag = "ture";
    cout << "请输入布尔变量" << endl;
    cin >> flag;
    cout << "布尔变量为:" << flag << endl;
    system("pause");
    return 0;
}
```
