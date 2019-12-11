//11、编一程序，将字符串“Hello,C++！”赋给一个字符数组，
//然后从第一个字母开始间隔地输出该串（请用指针完成）。
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[11] = "Hello,C++!";
	char *p = str;
	int len = 0;
	int i = 0;
	len = strlen(str);
	for(i = 0; i<len; i++)
	{
		cout<<*(p+i)<<" ";
	}
	return 0;
}
