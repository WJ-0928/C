#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159//定义一个常量 
int main()
{
	int r;
	double C,S;//C为周长，S为面积； 
	cout<<"请输入半径:"<<endl;
	cin>>r;
	C=2*PI*r; 
	S=PI*r*r;
	cout<<C<<S<<endl; 
	return 0;
}
