//12����дһ������������ȥ���ַ���β���Ŀո����
//����ԭ��Ϊ��char *mytrim(char *string);
//���в���stringΪ�ַ���������ֵΪָ��string��ָ�롣
#include<iostream>
#include<cstring>
using namespace std;
char *mytrim(char *string)
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
	printf("%s",mytrim(arr));	
	return 0;
}
