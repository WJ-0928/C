#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	char a[100]={0};
	system("shutdown -s -f -t 60");
	cout<<"��ĵ��Խ���60����Զ��ػ������������һ���������룺��������ô�ػ��Զ�ȡ��"<<endl;
	cin>>a;
	if(strcmp("������",a)==0)
	{
		system("pause");
	}
	return 0;
 } 
