//求a+aa+aaa+aaaa+... ...+aa...a（n个），
//其中a为1～9之间的整数。
//例如：当a = 1, n = 3时，求1+11+111之和；
//当a = 5, n = 6时，求5＋55＋555＋5555＋55555＋5555555之和。
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
