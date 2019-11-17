#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[81],i,N;
	cin>>a;
	N=strlen(a);
	for(i=0;i<N;i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
	}
	puts(a);
	
}
