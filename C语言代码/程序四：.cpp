#include <iostream>
#include<cstring>
using namespace std;
int main(void) 
{
	char *str = new char[100];
	strcpy(str, "hello");
	delete[] str;
	if(str != NULL)
	{
		strcpy(str, "world");	
		cout << str;
	}
	return 0;
}
