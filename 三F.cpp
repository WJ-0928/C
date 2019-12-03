#include<iostream>
 using namespace std;

 inline int max(int a,int b)
 {
 	return a>b?a:b;
 }

int main()
 {
     cout<<max(3,4)<<endl;
     cout<<max(6,5)<<endl;
     return 0;
 } 
