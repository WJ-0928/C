#include<iostream>
using namespace std;
int main()
{
	int a = 15, b = 20;
	const int c = 105;
	const int *p1 = &c;
	int *const p2 = &b;
	const int *const p3 = &c;
	p1 = &b;
	//*p1 = 100; ���ǿ����޸�����ָ���ֵ���������޸�ָ���ֵ 
	//p2 = &a;//���ǿ����޸�����ָ���ֵ���������޸�ָ���ֵ 
	*p2 = a;
	//p3 = &b;���ǿ����޸�����ָ���ֵ���������޸�ָ���ֵ 
	//*p3 = 100;���ǿ����޸�����ָ���ֵ���������޸�ָ���ֵ 
	return 0;
}
