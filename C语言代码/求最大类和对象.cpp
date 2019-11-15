#include<iostream> 
using namespace std;
 
class Max
{
	int a,b,c;

public:
	Max(int n,int m,int z)
	{
		a=n;
		b=m;
		c=z;
	      
	}
    void max()
	{
		if(a<b)
			a=b;
		else
		if(a<c)
		    a=c;
	}
	void out()
	{
		cout<<a<<endl;
	}
 
};
int main()
 {
 	int n,m,z;
 	cin>>n>>m>>z;
    Max a(n,m,z);
    a.max();
    a.out();
    return 0;
} 

