//实现一个函数判断year是不是润年
#include<stdio.h>
int is_leap_year(int x)
{
	if((x%4==0&&x%100!=0)||(x%400==0))
	{
		return 1;
	}
	return 0;
	
}
int main()
{
	int year=0;
    for(year=1000;year<=2000;year++){
    	if(is_leap_year(year)==1)
    	{
    		printf(" %d",year);
		}
	}

	
	return 0;
}
