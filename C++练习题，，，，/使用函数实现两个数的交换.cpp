//2.ʹ�ú���ʵ���������Ľ����� 

#include<stdio.h>
void swap(int *x,int *y)
{
	int tewp=*x;
	*x=*y;
	*y=tewp;
	printf("%d %d",*x,*y);
}
int main()
{
	int num1=0;
	int num2=0;
	scanf("%d %d",&num1,&num2);
	swap(&num1,&num2);
	return 0;
}
