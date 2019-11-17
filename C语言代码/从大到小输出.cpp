#include<iostream>
using namespace std;
void max(int *x,int *y,int *z);
int main()
{
    int a,b,c;
	cin>>a>>b>>c;
	max(&a,&b,&c);
	cout<<a<<" "<<b<<" "<<c;	
}
void max(int *x,int *y,int *z){
	int tewp;
	if(*x<*y){
		tewp=*x;
		*x=*y;
		*y=tewp;
	}
	if(*y<*z){
		tewp=*y;
		*y=*z;
		*z=tewp;
	}
	if(*x<*y){
		tewp=*x;
		*x=*y;
		*y=tewp;
	}
}
