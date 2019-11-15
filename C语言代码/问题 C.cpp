#include<iostream>
using namespace std;
int max(int a,int b,int c,int d,int e)
{
	if(b>a) a=b;
	if(c>a) a=c;
	if(d>a) d=a;
	if(e>a) e=a;
	return a;
 } 
float max(float a,float b,float c,float d,float e)
{
	if(b>a) a=b;
	if(c>a) a=c;
	if(d>a) a=d;
	if(e>a) a=e;
	return a;	
}
long max(long a,long b,long c,long d,long e)
{
	if(b>a) a=b;
	if(c>a) a=c;
	if(d>a) d=a;
	if(e>a) e=a;
	return a;
}
int main()
{
	int a,b,c,d,e;
	float a1,b1,c1,d1,e1;
	long a2,b2,c2,d2,e2;
	cin>>a>>b>>c>>d>>e;
	cin>>a1>>b1>>c1>>d1>>e1;
	cin>>a2>>b2>>c2>>d2>>e2;
	int n;
	n=max(a,b,c,d,e);
	cout<<n<<endl;
	float m;
	m=max(a1,b1,c1,d1,e1);
	cout<<m<<endl;
	long  int q;
	q=max(a2,b2,c2,d2,e2);
	cout<<q<<endl;
	return 0;
}
