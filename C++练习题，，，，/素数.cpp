#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=100;i<=200;i++){
		for(j=2;j<=i-1;j++){
			if(i%j==0){
			break;//如果能整除就跳出该次循环，避免多余运算
	    	}
		}
		if(i==j){//该条件代表没有整除。
				cout<<i<<endl;
	    	}
	}
	cout<<"\n"<<endl;
	return 0;
} 
