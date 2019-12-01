#include<iostream>
using namespace std;
int c(int x,int y)
{
	int z=y;
	while(x%y!=0)
	{
		z=x%y;
		x=y;
		y=z;
	}
	return z;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<c(a,b)<<endl;
 } 
