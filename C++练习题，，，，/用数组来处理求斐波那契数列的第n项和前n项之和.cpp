//用数组来处理求斐波那契数列的第n项和前n项之和。
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
	cout<<"第"<<n<<"项是"<<f[n]<<"前"<<n<<"项和是"<<sum<<endl;
	return 0; 
} 
