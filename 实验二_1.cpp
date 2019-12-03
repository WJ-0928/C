//1、完成下面程序，熟悉函数调用的参数传递机制。
//（1）给定以下函数原型声明：
//void sort1( int *a, int *b, int *c );
//假设函数功能是把三个整数按升序排列，编程实现这个函数。
//（2）给定以下函数原型声明：
//void sort2( int &a, int &b, int &c );
//假设函数功能是把三个整数按降序排列，编程实现这个函数。
//（3）考虑如果用值传递能否完成上面功能。
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

