//�������º���ԭ��������
//void sort2( int &a, int &b, int &c );
//���躯�������ǰ������������������У����ʵ�����������
#include<iostream>
using namespace std;
void sort2(int &a,int &b,int &c);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort2(a,b,c);
	cout<<a<<" "<<b<<" "<<c<<endl; 
}
void sort2(int &a,int &b,int &c)
{
	int temp;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	if (a<b)
	{
		temp =a;
		a = b;
		b = temp;
	}
}

