//使用梯形法计算定积分。被积函数为f(x) = sin(x)+e^x，积分区间[0,1],积分区间被等分200份。
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double i=0, j=1;
	double sum=0,x,y;
	int m,n=0;
	cout<<"请输入分段数:";
	cin>>m; 
	x=(j-i)/m;
	y=i;
	for(n=0;n<m;n++)
	{
	    sum=sum+(x/2)*(sin(y)+sin(y+x)+exp(y)+exp(y+x));//e的x次方的函数  如 exp(0)表示e的0次方=1
		y=y+x;
	}
	cout<<"sin(x)+e^x在积分区间[0，1]的积分是"<<sum<<endl;
} 
