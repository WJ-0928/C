//判断一个数是否为偶数，只要判断它是否能被2整除。若能整除，则为偶数；否则，为奇数。
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%2==0){//("%"为求余符号，“/"为除号，y%x=0代表整除； 
		cout<<"偶数"<<endl; 
	}
	else{
		cout<<"奇数"<<endl; 
	}
	return 0;
}
