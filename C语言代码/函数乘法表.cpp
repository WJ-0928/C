//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���
#include<stdio.h>
void multiply(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d   ",i,j,i*j);
		}
		printf("\n");
	}
	
}
int main() 
{
    int n;
    scanf("%d",&n);
    multiply(n);
    return 0;
} 
	
 
