//11����һ���򣬽��ַ�����Hello,C++��������һ���ַ����飬
//Ȼ��ӵ�һ����ĸ��ʼ���������ô�������ָ����ɣ���
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[11] = "Hello,C++!";
	char *p = str;
	int len = 0;
	int i = 0;
	len = strlen(str);
	for(i = 0; i<len; i++)
	{
		cout<<*(p+i)<<" ";
	}
	return 0;
}
