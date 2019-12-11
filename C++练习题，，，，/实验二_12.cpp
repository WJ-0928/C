//12、编写一个函数，用于去掉字符串尾部的空格符。
//函数原型为：char *mytrim(char *string);
//其中参数string为字符串，返回值为指向string的指针。
#include<iostream>
#include<cstring>
using namespace std;
char *mytrim(char *string)
{
	int len = 0;
	int i = 0;
	char arr1[50];
	len = strlen(string);
	for(i=0; i<len; i++)
	{
		if(string != " ")
		{
			arr1[i] = *string;
		}
		string++;		
	}
	return arr1;
}
int main()
{
	char arr[50];
	scanf("%s",arr);
	printf("%s",mytrim(arr));	
	return 0;
}
