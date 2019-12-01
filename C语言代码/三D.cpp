#include<iostream>
using namespace std;
int add(int a,int b=2,int c=5)
{
	return a+b+c;
 } 
 

int main() 
 {
    cout<<add(1,4)<<endl;
    cout<<add(3)<<endl;
    cout<<add(1,2,3)<<endl;
    return 0;
}
