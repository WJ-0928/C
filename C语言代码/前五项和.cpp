
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//���磺2+22+222+2222+22222 

#include<iostream>
using namespace std;
int main()
{
	int a=0,i,Sn=0,k=0;
	cin>>a;
	k=a;
	for(i=0;i<5;i++)
	{
		Sn+=k;
		k=k*10+a;
		 
	}
	cout<<Sn<<endl;
 } 
