//9、阅读下列程序，指出错误的语句和出错的原因，然后上机调试并改正错误。
#include<iostream>
int main()
{
	int a = 15, b = 20;
	const int c = 105;
	const int *p1 = &c;
	int *const p2 = &b;
	const int *const p3 = &c;//const修饰的变量不能被修改
	p1 = &b;
	*p2 = a;
	return 0;
}
