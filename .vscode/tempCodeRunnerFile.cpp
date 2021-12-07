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