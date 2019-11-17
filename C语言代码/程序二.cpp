#include <iostream>
#include<cstring>
using namespace std;
void GetMemory(char **p)
{
	*p = new char[100];
}
int main() 
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	cout << str;
	return 0;
}
