//ͨ������Ŀ����ϰ�������ճ�Ա��������ؼ���Ԫ���������
//Ҫ����һ�������࣬���ؼӷ��ͼ������������Ӧ�Ը��������Ҫ�����ز��������(<<)�Է������һ��������Ҫ��
//Input
//Ҫ/�����������д�������ʱ��ʼ�������ֵ��
//Output

//������ݹ���4�У��ֱ����a��b��ֵ��������͡������ֵ
//Sample Input
//��
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
