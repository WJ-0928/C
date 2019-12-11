//13、编写一个函数，用于去掉字符串前面的空格。
//函数原型为：char *myltrim(char *string);
//其中参数string为字符串，返回值为指向string的指针
#include<iostream>
#include<cstring>
using namespace std;
char *myltrim(char *string)
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
	printf("%s\n",myltrim(arr));
	return 0;
}
