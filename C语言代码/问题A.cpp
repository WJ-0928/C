#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
 } 
 int main()
 {
 	int m,n;
 	cin>>m>>n;
 	cout<<m<<" "<<n<<endl;
 	swap(m,n);
 	cout<<m<<" "<<n<<endl;
 	return 0;
 }
