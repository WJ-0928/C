#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int r,h;
	float c,d,e,f,g=3.1415926;
	cin>>r>>h;
	c=2*g*r;
	d=g*r*r;
	e=c*h;
	f=d*h;
	cout<<fixed<<setprecision(2)<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
}
