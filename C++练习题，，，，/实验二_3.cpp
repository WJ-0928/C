//3����д�ַ������Һ���mystrchr()��
//�ú����Ĺ��������ַ����в���ָ���ַ�������и��ַ���
//�򷵻ظ��ַ����ַ����е�һ�γ��ֵ�λ�ã����򷵻�0��Ȼ���Э������������֤������ԭ��Ϊ��
//int mystrchr( char string[], char c );
#include<iostream>
#include<cstring>
using namespace std;
int mystrchr( char string[], char c )
{
	int length = 0;
	int i = 0;
	length = strlen(string);
	for(i=0; i<length; i++)
	{
		if(string[i] == c)
		{
			++i;
			return i;
		}
	}
	return 0;
}
int main()
{
	int n = 0;
	char str[50] = {0};
	char c;
	scanf("%s",str);
	getchar();//ǰ���scanf()�ڶ�ȡ����ʱ���ڻ�����������һ���ַ�'\n'
//	��������s[i]��ֵ�󰴻س������£�������������ڴ˼�һ��
//getchar()������س���ȡ�ߵĻ���gets(���Ͳ���ȴ��Ӽ��̼����ַ���
//���ǻ�ֱ��ȡ����������õġ��س������Ӷ����¶�ȡ����  
	scanf("%c",&c);	
	n = mystrchr(str, c);
	cout<<n<<endl;
	return 0;
}
