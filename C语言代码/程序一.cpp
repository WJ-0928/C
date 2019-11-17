#include <iostream>
#include<cstring>
using namespace std;
char *GetMemory()
{
	char *p = new char[100];
	return p;
}
int main(void) 
{
	char *str = NULL;
	str=GetMemory();
	strcpy(str, "hello world");
	cout << str;
	return 0;
}
