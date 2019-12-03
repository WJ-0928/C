//1��������������Ϥ�������õĲ������ݻ��ơ�
//��1���������º���ԭ��������
//void sort1( int *a, int *b, int *c );
//���躯�������ǰ������������������У����ʵ�����������
//��2���������º���ԭ��������
//void sort2( int &a, int &b, int &c );
//���躯�������ǰ������������������У����ʵ�����������
//��3�����������ֵ�����ܷ�������湦�ܡ�
#include<iostream>
using namespace std;
void sort1(int *a, int *b, int *c)
{
	int temp = 0;
	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if (*b > *c)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
	if (*a > *c)
	{
		temp = *a;
		*a = *c;
		*c = temp;
	}
}
void sort2(int &a, int &b, int &c)
{
	int temp = 0;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}

}
int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	sort1(&num1, &num2, &num3);
	cout << num1 << num2 << num3 << endl;
	sort2(num1, num2, num3);
	cout << num1 << num2 << num3 << endl;
	return 0;
}

