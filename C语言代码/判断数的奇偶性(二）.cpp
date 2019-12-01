//判断一个数的奇偶，只需判断最后一位，在二进制表示形式中，奇数的末位为1，偶数末位为0。可以用整数n与1进行按位与运算：n&1为非0（真），则是奇数，为0（假），则是偶数。显然方法二比方法一执行速度要快。
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n&1!=0){
		cout<<"奇数"<<endl;
	} 
	else{
		cout<<"偶数"<<endl; 
	}
	return 0;
}
