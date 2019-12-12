#include<iostream>
using namespace std;
int main()
{
	int i,k=1;
	double sum; 
	for(i=1,sum=0;i<=100;i++)
	{
		sum+=k/i;
		k*=-1;
	}
	cout<<sum<<endl;
}
