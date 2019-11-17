
//ͨ���������ϰ�������տ������캯���Ķ����ʹ�÷�����
//���һ����������Rect�����㳤���ε��ܳ��������������˽�����ݳ�ԱLength(��)��Width(��)���ɾ���ȱʡ����ֵ�Ĺ��캯�������ʼ��������ԭ��Ϊ��Rect(double Length=0, double Width=0); ��Ϊ�䶨�忽�����캯�����β�Ϊ����ĳ����ã�����ԭ��Ϊ��Rect(const Rect &); ��д������������Rect����r1��ʼ��Ϊ���������ݣ�����r1��ʼ����һ��Rect����r2���ֱ��������ĳ��Ϳ��ܳ��������

//Ҫ�� �������� Rect r1(3.0,2.0),r2(r1);
//Input
//��������ʵ�����м���һ���ո������������εĳ��Ϳ�
//Output
//����6��?��
//�ֱ����r1�ĳ��Ϳ�?r1���ܳ���?r1�������r2�ĳ��Ϳ�?r2���ܳ���?r2�������ע�ⵥ���뵥��֮����һ���ո���
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

//����?-7.0 -8.0
//���
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
