#include<iostream>
using namespace std;
int max(int a1,int b1,int c1,int d1,int e1){
	int max=a1;
	if(b1>max){
		max=b1;
	}
	if(c1>max){
		max=c1;
	}
	if(d1>max){
		max=d1;
	}
	if(e1>max){
		max=e1;
	}
	return max;
}
float max(float a2,float b2,float c2,float d2,float e2){
	float max=a2;
	if(b2>max){
		max=b2;
	}
	if(c2>max){
		max=c2;
	}
	if(d2>max){
		max=d2;
	}
	if(e2>max){
		max=e2;
	}
	return max;
}
int long max(int long a3,int long b3,int long c3,int long d3,int long e3){
	int long max=a3;
	if(b3>max){
		max=b3;
	}
	if(c3>max){
		max=c3;
	}
	if(d3>max){
		max=d3;
	}
	if(e3>max){
		max=e3;
	}
	return max;
}
int main()
{
	int a1,b1,c1,d1,e1;
	float a2,b2,c2,d2,e2;
	int long a3,b3,c3,d3,e3;
	cin>>a1>>b1>>c1>>d1>>e1;
	cin>>a2>>b2>>c2>>d2>>e2;
	cin>>a3>>b3>>c3>>d3>>e3;
	cout<<max(a1,b1,c1,d1,e1)<<endl;
	cout<<max(a2,b2,c2,d2,e2)<<endl;
	cout<<max(a3,b3,c3,d3,e3)<<endl;
	return 0;
}
