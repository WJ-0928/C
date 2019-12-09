//3、编写字符串查找函数mystrchr()。
//该函数的功能是在字符串中查找指定字符，如果有该字符，
//则返回该字符在字符串中第一次出现的位置，否则返回0，然后便协主函数进行验证。函数原型为：
//int mystrchr( char string[], char c );
#include<iostream>
#include<cstring>
using namespace std;
int mystrchr( char string[], char c )
{
	int length = 0;
	int i = 0;
	length = strlen(string);
	for(i=0; i<length; i++)
	{
		if(string[i] == c)
		{
			++i;
			return i;
		}
	}
	return 0;
}
int main()
{
	int n = 0;
	char str[50] = {0};
	char c;
	scanf("%s",str);
	getchar();//前面的scanf()在读取输入时会在缓冲区中留下一个字符'\n'
//	（输入完s[i]的值后按回车键所致），所以如果不在此加一个
//getchar()把这个回车符取走的话，gets(）就不会等待从键盘键入字符，
//而是会直接取走这个“无用的”回车符，从而导致读取有误  
	scanf("%c",&c);	
	n = mystrchr(str, c);
	cout<<n<<endl;
	return 0;
}
