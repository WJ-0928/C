#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159//����һ������ 
int main()
{
	int r;
	double C,S;//CΪ�ܳ���SΪ����� 
	cout<<"������뾶:"<<endl;
	cin>>r;
	C=2*PI*r; 
	S=PI*r*r;
	cout<<C<<S<<endl; 
	return 0;
}
