//通过本题目的练习可以掌握成员运算符重载及友元运算符重载
//要求定义一个复数类，重载加法和减法运算符以适应对复数运算的要求，重载插入运算符(<<)以方便输出一个复数的要求。
//Input
//要/求在主函数中创建对象时初始化对象的值。
//Output

//输出数据共有4行，分别代表a，b的值和它们求和、求差后的值
//Sample Input
//无
///Sample Output
//a=3.2+4.5i
//b=8.9+5.6i
//a+b=12.1+10.1i
//a-b=-5.7-1.1i

#include<iostream>
using namespace std;
class Num
{
public:
    void show1();
    void show2();
    void show3();
    void show4();
    Num(){a = 0;b = 0;}
    Num(double x,double y);
    Num sum(Num &p);
    Num sul(Num &p);
private:
    double a,b;
};

Num::Num(double x,double y)
{
    a = x;
    b = y;
}

Num Num::sum(Num &p)
{
    Num x;
    x.a = a + p.a;
    x.b = b + p.b;
    return x;
}

Num Num::sul(Num &p)
{
    Num c;
    c.a = a - p.a;
    c.b = b - p.b;
    return c;
}

void Num::show1()
{
    cout<<"a="<<a<<"+"<<b<<"i"<<endl;
}

void Num::show2()
{
    cout<<"b="<<a<<"+"<<b<<"i"<<endl;
}

void Num::show3()
{
    cout<<"a+b="<<a<<"+"<<b<<"i"<<endl;
}

void Num::show4()
{
    if(b<0)
        b = -b;
    cout<<"a-b="<<a<<"-"<<b<<"i"<<endl;
}

int main()
{
    Num r1(3.2,4.5),r2(8.9,5.6),r3,r4;
    r3 = r1.sum(r2);
    r4 = r1.sul(r2);
    r1.show1();
    r2.show2();
    r3.show3();
    r4.show4();
    return 0;
}
