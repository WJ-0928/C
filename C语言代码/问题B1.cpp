#include <iostream>  
using namespace std;  
int max(int a,int b,int c=-32753)  
{   
    if(a<b)  
        a=b;  
    if(a<c)  
        a=c;  
    cout<<a<<endl;  
    return 0;  
}  
int main()  
{  
    int a,b,c;  
    cin>>a>>b>>c;  
    cout<<a<<" "<<b<<" ";   
    max(a,b);  
    cout<<a<<" "<<b<<" "<<c<<" ";  
    max(a,b,c);  
    return 0;  
}  
