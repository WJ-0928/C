//2����д��������ԭ��Ϊ��void index(int a[], int n,int &sub)��
//���ܣ��ڴ�СΪn������a�У�����ĳ����sub��
//���ҵ�������Ӧ����Ԫ�ص��±긳��sub����û�ҵ�����-1����sub��
//������������ͨ���ж�sub��ֵ���ж��������Ƿ��и�����
//�����sub���������͵Ĳ��������𷵻�ֵ�����á�
#include<iostream>
using namespace std;
void index(int a[], int n,int &sub)
{
	int i = 0;
	if (NULL == a || n < 1)
	{
		sub = -1;
	 	return ;
	}
	else
	{
		for(i=0; i<n; i++)
		{
			if(a[i] == sub)
			{
				sub = i;
				return ;//Ϊʲôbreak ���У����� 
			}
		}
		sub = -1;
	}
}
int main()
{
	int arr[100]={0};
	int sub = 0;
	int n = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cin>>sub;	
	index(arr,n,sub);
	cout<<sub;
	return 0;
}
