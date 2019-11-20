#include<iostream>
using namespace std;
swap(int *x,int *y)
{
	int tewp=*x;
	*x=*y;
	*y=tewp;
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
 } 
