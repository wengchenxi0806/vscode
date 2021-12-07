# C++基础入门
[toc]

#### 1:C++初识

  + 1.1 第一个C++程序

      ```C++
      #include <iostream>
      using namespace std;
      int main()
      {
          cout << "hello,word" << endl;
          printf("hello,c++\n");
          system("pause");
          return 0;
      }
      ```

  + 1.2 注释

    * 1.1 单行注释:

      ```
      
      //我是单行注释
      ```

    * 1.2 多行注释

      ```

      /*
      我是多行注释
      */
      ```

  + 1.3 变量和常量

      + 1.1 变量

        * 作用

          * 给一段指定的内存空间起名,方便操作这段内存空间

        * 语法

          * ```数据类型 变量名 = 初始值;```

        *  示例

            ```c++

            #include <iostream>
            using namespace std;
            int main()
            {
                int a = 10 ;
                cout >> a >> endl;
                system("pause");
                return 0;
            }
            ```

      + 1.2 常量

        - 1.1 作用

          - 用于记录程序中不可更改的数据

        - 1.2 C++定义常量的两种方式

          - 1.1 #define 宏常量

            - 语法:#define 常量名 常量值

            - ==通常在文件上方定义==,表示一个常量

            * 示例

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

          - 1.2 const 修饰的变量

            - 语法:const 数据类型 常量名 = 常量值

            - ==通常在变量定义前加关键字 const== ,修饰该变量为常量,不可修改

            * 示例

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

 + 1.4 关键字

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

  + 1.5 标识符命名规则

     - 作用

        * c++规定给标识符(变量,常量)命名时的一套规则

    - 标识符不能是关键字

    - 标识符只能由字母数字下划线组成

    - 第一个字符必须是字母或下划线

    - 标识符中区分大小写

#### 数据类型

  - 数据类型存在的意义:

    - 给变量分配合适的内存空间.

  + 2.1 整型

    - 作用

    - 整型变量表示的是整数类型的数据

    - c++中能够表示整型的类型有以下几种方式,区别在于所占用的内存空间不同.

      | 数据类型            | 占用空间                                               | 取值范围         | 数值                                     |
      | ------------------- | ------------------------------------------------------ | ---------------- | ---------------------------------------- |
      | short(短整型)       | 2 字节                                                 | (-2^15~2^15-1)   | -32768~32767                             |
      | int(整型)           | 4 字节                                                 | (-2^31 ~ 2^31-1) | -2147483648~2147483647                   |
      | long(长整型)        | windows 为 4 字节,linux 为 4 字节(32 位),8 字节(64 位) | (-2^31 ~ 2^31-1) | -2147483648~2147483647                   |
      | long long(长长整型) | 8 字节                                                 | (-2^63 ~ 2^63-1) | -9223372036854775808~9223372036854775807 |

  + 2.2 sizeof 关键字

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

  + 2.3 实型(浮点型)

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

 + 2.4 字符型

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
      | ASCII 值 | 控制字符 | ASCII 值 | 字符    | ASCII 值 | 字符 | ASCII 值 | 字符 |
      | -------- | -------- | -------- | ------- | -------- | ---- | -------- | ---- |
      | 0        | NUT      | 32       | (space) | 64       | @    | 96       | `    |
      | 1        | SOH      | 33       | !       | 65       | A    | 97       | a    |
      | 2        | STX      | 34       | "       | 66       | B    | 98       | b    |
      | 3        | ETX      | 35       | #       | 67       | C    | 99       | c    |
      | 4        | EOT      | 36       | $       | 68       | D    | 100      | d    |
      | 5        | ENQ      | 37       | %       | 69       | E    | 101      | e    |
      | 6        | ACK      | 38       | &       | 70       | F    | 102      | f    |
      | 7        | BEL      | 39       | '       | 71       | G    | 103      | g    |
      | 8        | BS       | 40       | (       | 72       | H    | 104      | h    |
      | 9        | HT       | 41       | )       | 73       | I    | 105      | i    |
      | 10       | LF       | 42       | \*      | 74       | J    | 106      | j    |
      | 11       | VT       | 43       | +       | 75       | K    | 107      | k    |
      | 12       | FF       | 44       | ,       | 76       | L    | 108      | l    |
      | 13       | CR       | 45       | -       | 77       | M    | 109      | m    |
      | 14       | SO       | 46       | .       | 78       | N    | 110      | n    |
      | 15       | SI       | 47       | /       | 79       | O    | 111      | o    |
      | 16       | DLE      | 48       | 0       | 80       | P    | 112      | p    |
      | 17       | DC1      | 49       | 1       | 81       | Q    | 113      | q    |
      | 18       | DC2      | 50       | 2       | 82       | R    | 114      | r    |
      | 19       | DC3      | 51       | 3       | 83       | S    | 115      | s    |
      | 20       | DC4      | 52       | 4       | 84       | T    | 116      | t    |
      | 21       | NAK      | 53       | 5       | 85       | U    | 117      | u    |
      | 22       | SYN      | 54       | 6       | 86       | V    | 118      | v    |
      | 23       | TB       | 55       | 7       | 87       | W    | 119      | w    |
      | 24       | CAN      | 56       | 8       | 88       | X    | 120      | x    |
      | 25       | EM       | 57       | 9       | 89       | Y    | 121      | y    |
      | 26       | SUB      | 58       | :       | 90       | Z    | 122      | z    |
      | 27       | ESC      | 59       | ;       | 91       | [    | 123      | {    |
      | 28       | FS       | 60       | <       | 92       | /    | 124      |      |  |
      | 29       | GS       | 61       | =       | 93       | ]    | 125      | }    |
      | 30       | RS       | 62       | >       | 94       | ^    | 126      | ~    |
      | 31       | US       | 63       | ?       | 95       | \_   | 127      | DEL  |

    * ASCII 码大致由以下==两部分==组成

      - ASCII 非打印控制字符:ASCII 表上的数字 **0-31** 分配给了控制字符,用于控制像打印机等一些外围设备.

      - ASCII 打印字符:数字 **32-126** 分配给了能在键盘上找到的字符,当查看或打印文档时就会出现.

+ 2.5 转义字符

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

  * 示例

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

  + 2.6 字符串型

    * 作用

      * 用于表示一串字符

    * 两种风格

      + 1.1 c风格字符串:```char 变量名[] = "字符串值"```

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

      + 1.2 c++风格字符串:```string 变量名 = "字符串值"```

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
  + 2.7 布尔类型 bool

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

  + 2.8 数据的输入 cin

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

#### 运算符

  + 3.1 算数运算符

    * 作用

      * 用于处理四则运算

    * 算数运算符包括以下符号:

      | 运算符 | 术语       | 示例       | 结果     |
      | ------ | ---------- | ---------- | -------- |
      | +      | 正号       | +3         | 3        |
      | -      | 负号       | -3         | 3        |
      | +      | 加         | 10+5       | 15       |
      | -      | 减         | 10-5       | 5        |
      | *      | 乘         | 10*5       | 50       |
      | /      | 除         | 10/5       | 2        |
      | %      | 取模(取余) | 10%3       | 1        |
      | ++     | 前置递增   | a=2;b=++a; | a=3;b=3; |
      | ++     | 后置递增   | a=2;b=a++; | a=3;b=2; |
      | --     | 前置递减   | a=2;b=--a; | a=1;b=1; |
      | --     | 后置递减   | a=2;b=a--; | a=1;b=2; |

    * 示例

        ```c++ {line-numbers}
        #include <iostream>
        using namespace std;
        int main()
        {
            int num1 = 10;
            int num2 = 3;
            int num3 = 20;
            int num4 = 0;
            float num5 = 3.1415f;
            double num6 = 1.1415;
            int num7 = 70;
            int num8 = 80;
            cout << "加法结果为:" << num1 + num2 << endl; //加法运算
            cout << "减法结果为:" << num1 - num2 << endl; //减法运算
            cout << "乘法结果为:" << num1 * num2 << endl; //乘法运算
            cout << "除法结果为:" << num1 / num2 << endl; //除法运算
            //两个整数相除,结果还是整数,取整
            cout << "除法结果为:" << num1 / num3 << endl; //除法运算,结果为0;
            // cout << "除法结果为:" << num1 / num4 << endl; //除法运算,两个数字相除,除数不能为0;
            cout << "除法结果为:" << num5 / num6 << endl; //除法运算,两个小数可以相除,结果也能为小数;
            cout << "取模结果为:" << num1 % num2 << endl; //取模运算
            cout << "取模结果为:" << num1 % num3 << endl; //取模运算
            // cout << "取模结果为:" << num1 % num4 << endl; //取模运算
            //本质是先除法运算再取模,所以不能除0;
            // cout << "取模结果为:" << num5 % num6 << endl; //取模运算
            //两个小数不能做取模运算

            //递增运算符示例
            num7++;
            cout << "前置递增结果为:" << num7 << endl; //前置递增
            ++num8;
            cout << "后置递增结果为:" << num8 << endl; //后置递增

            //递增表达式示例
            int num9 = ++num1 * 10;
            cout << "前置递增表达式结果为:" << num9 << endl; //前置递增:先让变量+1,再运行表达式的运算;
            int num10 = num2++ * 10;
            cout << "后置递增表达式结果为:" << num10 << endl; //后置递增:先运行表达式的运算,再让变量+1;

            //递减运算符示例
            int num11 = 10;
            --num11;
            cout << "后置递减结果为:" << num11 << endl; //前置递减
            int num12 = 10;
            num12--;
            cout << "后置递减结果为:" << num12 << endl; //后置递减

            //递减表达式示例
            int num13 = 10;
            int num14 = --num13 * 10;
            cout << "前置递减表达式结果为:" << num14 << endl; //前置递减:先让变量-1,再运行表达式的运算;
            int num15 = 10;
            int num16 = num15-- * 10;
            cout << "后置递减表达式结果为:" << num16 << endl; //后置递减:先运行表达式的运算,再让变量-1;

            system("pause");
            return 0;
        }
        ```

  + 3.2 赋值运算符

    * 作用

      * 用于将表达式的值赋予给变量

    * 赋值运算符包括以下几个符号:

      | 运算符 | 术语   | 示例       | 结果     |
      | ------ | ------ | ---------- | -------- |
      | =      | 赋值   | a=2;b=3;   | a=2;b=3; |
      | +=     | 加等于 | a=0;a+=2;  | a=2;     |
      | -=     | 减等于 | a=5;a-=3;  | a=2;     |
      | *=     | 乘等于 | a=2;a*=2;  | a=4;     |
      | /=     | 除等于 | a=4;a/=2;  | a=2;     |
      | %=     | 模等于 | a=10;a%=3; | a=1;     |

    * 示例

      ```c++
      #include <iostream>
      using namespace std;
      int main()
      {
          int Num = 10;
          Num += 2;
          cout << "Num加等于结果为:" << Num << endl;
          int Num1 = 10;
          Num1 -= 2;
          cout << "Num1减等于结果为:" << Num1 << endl;
          int Num2 = 10;
          Num2 *= 2;
          cout << "Num2乘等于结果为:" << Num2 << endl;
          int Num3 = 10;
          Num3 /= 2;
          cout << "Num3除等于结果为:" << Num3 << endl;
          int Num4 = 10;
          Num4 %= 3;
          cout << "Num4模等于结果为:" << Num4 << endl;
          system("pause");
          return 0;
      }
      ```