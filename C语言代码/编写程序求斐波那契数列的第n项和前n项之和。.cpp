//��д������쳲��������еĵ�n���ǰn��֮�͡�
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
    cout<<"��"<<n<<"����"<<f<<" "<<"ǰ"<<n<<"��ĺ�"<<sum<<endl;
	return 0;	
}
