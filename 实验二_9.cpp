//9���Ķ����г���ָ����������ͳ����ԭ��Ȼ���ϻ����Բ���������
#include<iostream>
int main()
{
	int a = 15, b = 20;
	const int c = 105;
	const int *p1 = &c;
	int *const p2 = &b;
	const int *const p3 = &c;//const���εı������ܱ��޸�
	p1 = &b;
	*p2 = a;
	return 0;
}
