#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1000;i<=2000;i++){
	    if((i%4==0&&i%100!=0)||(i%400==0)){
	    	cout<<i<<endl;
		}
	}
 } 
