//编写字符串查找函数mystrchr()。
//该函数的功能是在字符串中查找指定字符，如果有该字符，
//则返回该字符在字符串中第一次出现的位置，否则返回0，然后便协主函数进行验证。函数原型为：
//int mystrchr( char string[], char c );。

#include<iostream>
#include<cstring>
using namespace std;
int mystrchr(char string[],char c)
{
	int i=0;
	while(string[i]!= '\0'){
		if(string[i]!=c){
			i++;
		}
		else{
			return i;
		}
	}
	return -1;
}
int main()
{
	char str[20]="I hate you";
	if(mystrchr(str,  'h' )==-1){
		cout<<"was not found in "<<endl;
	}
	else{
		cout<<"was  found in "<<mystrchr(str, 'h') + 1 <<endl;
	}
}

