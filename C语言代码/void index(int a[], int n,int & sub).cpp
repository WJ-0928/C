//��д��������ԭ��Ϊ��void index(int a[], int n,int & sub)��
//���ܣ��ڴ�СΪn������a�У�����ĳ����sub�����ҵ�������Ӧ����Ԫ�ص��±긳��sub��
//��û�ҵ�����-1����sub��������������ͨ���ж�sub��ֵ���ж��������Ƿ��и�����
//�����sub���������͵Ĳ��������𷵻�ֵ�����á�
#include<iostream>
using namespace std;
void index(int a[], int n, int &sub)
{
int iTmp = sub;
sub = -1;
if (NULL == a || n < 1)
{
return ;
}
for (int i = 0; i < n; i++)
{
if (a[i] == iTmp)
{
sub=i;//�����sub���±�λ��ֵ
break;
}
}
}
int main()
{
	char a[20];
	int n=20;
	int sub=-1;
	index( a[20], n, sub);
}

