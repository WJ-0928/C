
//通过本题的练习可以掌握拷贝构造函数的定义和使用方法；
//设计一个长方形类Rect，计算长方形的周长与面积。类中有私有数据成员Length(长)、Width(宽)，由具有缺省参数值的构造函数对其初始化，函数原型为：Rect(double Length=0, double Width=0); 再为其定义拷贝构造函数，形参为对象的常引用，函数原型为：Rect(const Rect &); 编写主函数，创建Rect对象r1初始化为长、宽数据，利用r1初始化另一个Rect对象r2，分别输出对象的长和宽、周长和面积。

//要求： 创建对象 Rect r1(3.0,2.0),r2(r1);
//Input
//输入两个实数，中间用一个空格间隔；代表长方形的长和宽
//Output
//共有6行?；
//分别输出r1的长和宽；?r1的周长；?r1的面积；r2的长和宽；?r2的周长；?r2的面积；注意单词与单词之间用一个空格间隔
///Sample Input
//56 32
//Sample Output
//the length and width of r1 is:56,32
//the perimeter of r1 is:176
//the area of r1 is:1792
//the length and width of r2 is:56,32
//the perimeter of r2 is:176
//the area of r2 is:1792
//Hint

//输入?-7.0 -8.0
//输出
//the length and width of r1 is:0,0
//the perimeter of r1 is:0
//the area of r1 is:0
//the length and width of r2 is:0,0
//the perimeter of r2 is:0
//the area of r2 is:0


#include<iostream>
using namespace std;
class Rect
{
	double Length;
	double Width;
public:
	rect(double x=0,double y=0){
		Length=x;
		Width=y;
	}
	rect1(const Rect & R)
	{
		Length=R.Length;
		Width=R.Width;
	}
	 void display1()
	{
		cout<<"the length and width of r1 is:"<<Length<<","<<Width<<endl;
        cout<<"the perimeter of r1 is:"<<2*(Length+Width)<<endl;
        cout<<"the area of r1 is:"<<Length*Width<<endl;
	}
	 void display2()
	{
		cout<<"the length and width of r2 is:"<<Length<<","<<Width<<endl;
        cout<<"the perimeter of r2 is:"<<(2*Length)+(2*Width)<<endl;
        cout<<"the area of r2 is:"<<Length*Width<<endl;
	}
};
int main()
{
	double a,b;
	cin>>a>>b;
	if(a<0||b<0)
	{
		a=0;
		b=0;
	}
	Rect r1;
	r1.rect(a,b);
	r1.display1();
	Rect r2;
	r2.rect1(r1);
	r2.display2();
}
