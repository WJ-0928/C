#include<iostream>
using namespace std;
int max(int a,int b){
	return a>b?a:b;
}
double max(double a,double b){
	return a>b?a:b;
}

int main()
{
cout<<"int compare "<<max(4,5)<<endl;
cout<<"double compare "<<max(45.23,2.3)<<endl;
    return 0;
}
