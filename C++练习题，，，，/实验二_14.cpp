//14����д����
//��дһ����Ӧ���ж��������������Ӽ�������������Ӣ�ﵥ�ʣ����ʿ����ظ�����
//�м��ÿո�ֿ�������0��ʾ����������ó������ͳ��ͬһ��Ӣ�ﵥ�ʱ����뼸�Σ�
//����Ӣ�ĵ��ʰ��ֵ�˳�������������ϸõ��ʱ�����Ĵ�����
//(��ʾ�������ýṹ����֯���ݣ��ѵ��ʺ͸õ����ֵĴ�����һ���ṹ����������)
//�������룺 book am book is book am 0
//�����am 2
//	  book 3
//	  is 1
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define N 999
int i = 1;
struct WORD//�ṹ�������洢�����Լ�����ֵĴ���
{
	string str;
	int num;
};
int main()
{
	WORD word[N];
	char a[N];  //�洢������ַ���
	int k = 0, m = 0,j = 0;
	cout << "input words:" << endl;
	for (j = 0; j<N; j++)
	{
		cin >> a[j];
		m++;  //m����ͳ��������ַ�����
		if (a[j] == '0') break;//����0��ʾ�������
	}
	char *p = a;
	for (j = 0; j<m; j++)
	{

		if (*p == ' ') //��ָ��ָ��ո��ʱ��ʹ洢һ������
		{
			i++;//i����ͳ�Ƶ��ʸ���
			k++;//k ������ʾҪ�洢���ʽṹ����±�
		}
		else 
			word[k].str += a[j];
			p++;//ÿ����һ���ַ��ж�֪������ƶ�һ��
		if (*p == '0')  
			break;//��ָ��ָ��0��ʱ��ֹͣ���ṹ����뵥��
	}
	for (j = 0; j<i - 1; j++)//�����ʰ��ֵ�˳������
	{
		string temp;
		for (k = j; k<i; k++)
		{
			if (word[j].str>word[k].str)
			{
				temp = word[j].str;
				word[j].str = word[k].str;
				word[k].str = temp;
			}
		}
	}
	for (j = 0; j<i; j++)
	{
		word[j].num = 0;//��ʼ��ÿ�����ʵ�����
		for (k = j; k<i; k++)
		{

			if (word[j].str == word[k].str) //ͳ��û�����ʵĸ���
			{
				word[j].num++;
			}
		}
		cout << setw(15)//�������
			<< setiosflags(ios::left)//�����
			<< word[j].str << "     number:" << word[j].num << endl;
		j += word[j].num - 1;//�����ظ��ĵ���ʱj�������ظ����ֵĵ���
	}
	return 0;
}

