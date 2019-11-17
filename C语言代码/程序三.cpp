#include <iostream>
using namespace std;
char* GetMemory()
{
	char p[5] = {'a', 'b', 'c', 'd', '\0'};
	return p;
}
int main(void) 
{
	char *str = NULL;
	str = GetMemory();
	cout << str;
	return 0;
}
