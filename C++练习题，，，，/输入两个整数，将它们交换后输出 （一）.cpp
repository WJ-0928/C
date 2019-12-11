#include<iostream>
using namespace std;
void swap(int &a,int &b)//作为函数的参数 
{
	int temp=a;
	a=b;
	b=temp;
}//交换两个变量值 
int main()
{
	int m,n;
	cin>>m>>n;
	swap(m,n);
	cout<<m<<" "<<n<<endl;
	return 0;
}
