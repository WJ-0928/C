//��a+aa+aaa+aaaa+... ...+aa...a��n������
//����aΪ1��9֮���������
//���磺��a = 1, n = 3ʱ����1+11+111֮�ͣ�
//��a = 5, n = 6ʱ����5��55��555��5555��55555��5555555֮�͡�
#include<iostream>
using namespace std;
int main()
{
	int a=0,n,k,sum=0;
	cin>>a>>n;
	for( int i=1;i<=n;i++){
		sum=a;
		k=k*10+a;
		sum+=k;
	}
	cout<<sum<<endl;
}
