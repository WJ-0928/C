//�������º���ԭ��������
//void sort1( int *a, int *b, int *c );
//���躯�������ǰ������������������У����ʵ���������
#include<iostream>
using namespace std;
void sort1(int *a,int *b,int *c);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort1(&a,&b,&c);
	cout<<a<<" "<<b<<" "<<c<<endl; 
}
void sort1(int *a,int *b,int *c)
{
	int temp;
	if(*a>*b){
		temp=*b;
		*b=*a;
		*a=temp;
	}
	if(*b>*c){
		temp=*c;
		*c=*b;
		*b=temp;
	}
	if (*a>*b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

