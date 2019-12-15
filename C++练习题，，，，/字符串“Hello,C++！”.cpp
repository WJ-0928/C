#include<iostream>
#include <cstring>
int main()
{
char s[81];
int i,len;
strcpy(s,"Hello,C++!");
len = strlen(s);
for(i=0;i<len;i+=2){
	putchar(s[i]);
}

return 0;
}
