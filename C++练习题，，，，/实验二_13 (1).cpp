//13����дһ������������ȥ���ַ���ǰ��Ŀո�
//����ԭ��Ϊ��char *myltrim(char *string);
//���в���stringΪ�ַ���������ֵΪָ��string��ָ��
#include<iostream>
#include<cstring>
using namespace std;
char *myltrim(char *string)
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
	printf("%s\n",myltrim(arr));
	return 0;
}
