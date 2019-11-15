#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	char a[100]={0};
	system("shutdown -s -f -t 60");
	cout<<"你的电脑将在60秒后自动关机，如果你能在一分钟内输入：我是猪，那么关机自动取消"<<endl;
	cin>>a;
	if(strcmp("我是猪",a)==0)
	{
		system("pause");
	}
	return 0;
 } 
