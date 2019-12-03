//给定以下函数原型声明：
//void sort2( int &a, int &b, int &c );
//假设函数功能是把三个整数按降序排列，编程实现这个函数。
#include<iostream>
using namespace std;
void sort2(int &a,int &b,int &c);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort2(a,b,c);
	cout<<a<<" "<<b<<" "<<c<<endl; 
}
void sort2(int &a,int &b,int &c)
{
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	if (a<b)
	{
		temp =a;
		a = b;
		b = temp;
	}
}

