//4、c。
//该函数功能是将指定字符串中的字符顺序颠倒排列，然后再编写主函数进行验证。函数原型为：
//void mystrrev( char string[]);
#include<iostream>
#include<cstring>
using namespace std;
void mystrrev( char string[])
{
	int len = 0;
	int i = 0;
	int temp = 0;
	len = strlen(string);	
	for(i = 0; i < len/2; i++)
	{
		temp= string[len-i-1];
		string[len-i-1] = string[i];
		string[i] = temp;
	}
}
int main()
{
	char string[50];
	cin.getline(string,50);
	mystrrev(string);
	cout<<string<<endl;
	return 0;
}
