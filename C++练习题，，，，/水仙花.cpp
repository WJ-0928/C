//水仙花：一个三位数，其各位数字的立方正好等于概数本身 
#include<iostream>
using namespace std;
int main()
{
	int i,a,b,c;
	for(i=0;i<=999;i++)
	{
		a=i/100;
		b= (i-a*100)/10;
		c=i-a*100-b*10;
		if(a*a*a+b*b*b+c*c*c==i)
		{
			cout<<i<<endl;
		}
	}
 } 
