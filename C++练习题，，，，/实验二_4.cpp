//4��c��
//�ú��������ǽ�ָ���ַ����е��ַ�˳��ߵ����У�Ȼ���ٱ�д������������֤������ԭ��Ϊ��
//void mystrrev( char string[]);
#include<iostream>
#include<cstring>
using namespace std;
void mystrrev( char string[])
{
	int len = 0;
	int i = 0;
	int temp = 0;
	len = strlen(string);	
	for(i = 0; i < len/2; i++)
	{
		temp= string[len-i-1];
		string[len-i-1] = string[i];
		string[i] = temp;
	}
}
int main()
{
	char string[50];
	cin.getline(string,50);
	mystrrev(string);
	cout<<string<<endl;
	return 0;
}
