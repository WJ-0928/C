#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d,e;
	float f;
	cin>>a>>b>>c;
	d=a+b+c;
	e=a*b*c;
	f=d/3.00;
	cout<<d<<" "<<e<<" "<<fixed<<setprecision(2)<<f<<endl;
}
