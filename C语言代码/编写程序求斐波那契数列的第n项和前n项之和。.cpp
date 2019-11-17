//编写程序求斐波那契数列的第n项和前n项之和。
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, i,x=0,y=1,f,sum=0;
	cin>>n;
	if(n==0){
		f=0;
	}
	else if(n==1){
		f=1;
		sum=f;
	}
	else{
		for(i=1;i<=n;i++)
		{
		    f=x+y;
		    x=y;
		    y=f;
			sum+=f+1;
		}
	}
    cout<<"第"<<n<<"项是"<<f<<" "<<"前"<<n<<"项的和"<<sum<<endl;
	return 0;	
}
