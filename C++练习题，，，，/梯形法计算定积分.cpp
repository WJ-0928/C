//ʹ�����η����㶨���֡���������Ϊf(x) = sin(x)+e^x����������[0,1],�������䱻�ȷ�200�ݡ�
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double i=0, j=1;
	double sum=0,x,y;
	int m,n=0;
	cout<<"������ֶ���:";
	cin>>m; 
	x=(j-i)/m;
	y=i;
	for(n=0;n<m;n++)
	{
	    sum=sum+(x/2)*(sin(y)+sin(y+x)+exp(y)+exp(y+x));//e��x�η��ĺ���  �� exp(0)��ʾe��0�η�=1
		y=y+x;
	}
	cout<<"sin(x)+e^x�ڻ�������[0��1]�Ļ�����"<<sum<<endl;
} 
