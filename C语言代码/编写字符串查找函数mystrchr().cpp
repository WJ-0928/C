//��д�ַ������Һ���mystrchr()��
//�ú����Ĺ��������ַ����в���ָ���ַ�������и��ַ���
//�򷵻ظ��ַ����ַ����е�һ�γ��ֵ�λ�ã����򷵻�0��Ȼ���Э������������֤������ԭ��Ϊ��
//int mystrchr( char string[], char c );��

#include<iostream>
#include<cstring>
using namespace std;
int mystrchr(char string[],char c)
{
	int i=0;
	while(string[i]!= '\0'){
		if(string[i]!=c){
			i++;
		}
		else{
			return i;
		}
	}
	return -1;
}
int main()
{
	char str[20]="I hate you";
	if(mystrchr(str,  'h' )==-1){
		cout<<"was not found in "<<endl;
	}
	else{
		cout<<"was  found in "<<mystrchr(str, 'h') + 1 <<endl;
	}
}

