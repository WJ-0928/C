//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
int is_prime(int n)
{
	int i=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i=0;
	for(i=100;i<=200;i++)
	{
		if(is_prime(i)==1)
		{
			printf(" %d",i);
		}
	}
}
