#include<iostream>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int max(int a,int b,int c)
{
    int	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	return max;
}
int main()
{
	int m,n,i;
	cin>>m>>n>>i; 
	cout<<m<<" "<<n<<" "<<max(m,n)<<endl;
	cout<<m<<" "<<n<<" "<<i<<" "<<max(m,n,i)<<endl;
	return 0;
}
