//��������������쳲��������еĵ�n���ǰn��֮�͡�
#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=2,f[100]={0,1,1};
	cin>>n;
	for(i=3;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
		sum=sum+f[i];
    }
	cout<<"��"<<n<<"����"<<f[n]<<"ǰ"<<n<<"�����"<<sum<<endl;
	return 0; 
} 
