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