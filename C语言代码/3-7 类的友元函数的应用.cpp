//通过本题目的练习可以掌握类的友元函数的定义和用法
//要求设计一个点类Point，它具有两个double型的数据成员x，y。为该类设计构造函数。并为其添加一个友元函数用于计算并输出两点间的距离；再添加一个输出成员函数用于输出点的信息。

//并编写主函数，实现以下的输入输出内容。
//Input
///4个double型的数，中间用一个空格间隔。
//Output
//输出数据共3行，前两行用于显示要求距离的两个点的信息，第三行显示两点的距离。
//Sample Input
//5 6 2 3
//Sample Output
//The first point is the coordinate:X=5,Y=6
//The second point is the coordinate:X=2,Y=3
//The distance between the two points is:4.24264 

#include<iostream>
#include<cmath>
using namespace std;
class Point
{
	double x,y;
public:
	Point(int a,int b)
	{
		x=a;
		y=b;
	}
	friend double dis(Point &p1,Point &p2){
		double d;
		d=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	    return d;
	}
	void display1()
    {
	    cout<<"The first point is the coordinate:X="<<x<<",Y="<<y<<endl;
    }
    void display2()
    {
    	cout<<"The second point is the coordinate:X="<<x<<",Y="<<y<<endl;
    }
};
int main()
{
	int e,f,c,d;
	cin>>e>>f>>c>>d;
	Point p1(e,f);
	Point p2(c,d);
    p1.display1();
    p2.display2();
    cout<<"The distance between the two points is:"<<dis(p1,p2)<<endl;	
}  
