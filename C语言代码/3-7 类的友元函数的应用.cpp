//ͨ������Ŀ����ϰ�������������Ԫ�����Ķ�����÷�
//Ҫ�����һ������Point������������double�͵����ݳ�Աx��y��Ϊ������ƹ��캯������Ϊ�����һ����Ԫ�������ڼ��㲢��������ľ��룻�����һ�������Ա����������������Ϣ��

//����д��������ʵ�����µ�����������ݡ�
//Input
///4��double�͵������м���һ���ո�����
//Output
//������ݹ�3�У�ǰ����������ʾҪ���������������Ϣ����������ʾ����ľ��롣
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
