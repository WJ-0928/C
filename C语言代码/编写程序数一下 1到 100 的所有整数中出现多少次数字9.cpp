#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,cout=0;
	for(i=1;i<=100;i++)
	{
		if(i%10==9)
		{
			cout++;
		}
		if(i-i%10==90)
		{
			cout++;
		}
	}
	printf("%d\n",cout);
}
