//6、掌握递归函数的编写方法。
//编写一个函数，求从n个不同的数中取r个数的所有选择的个数。其个数值为：
//其中： n! = n*(n-1)*(n-2)*...*1。要求：分别用递归和非递归两种方式完成程序设计；
//主程序中设计一个循环，不断从输入接收n和r的值，
//计算结果并输出，当用户输入0  0时，程序结束；能检查输入数据的合法性，要求n>=1并且n>=r。
//提示：（1）利用一个非递归函数fn(int n)计算n!，
//利用另一个函数cnr(int n, int r)计算Cnr，在该函数中调用fn()。
//问题：你打算用什么样的变量类型来存放n!函数返回的值？
//注意各种数据类型的内存字长不同，整数能存放的数据范围有限，你如何解决？
//2）利用一个递归函数实现，实现时利用公式：C(n,r) = C(n, r-1) * (n – r + 1) / r递归实现。
//如果 r = 0，则C(n, r) = 1，如果 r = 1, 则C(n, r) = n。
#include<iostream>
using namespace std;
double fn(int n)
{
	int j = 0;
	double sum = 1;
	for(j = 1; j <= n; j++)
	{
		sum*=j;
	}
	return sum; 
}
double cnr(int n,int r)
{
	return fn(n)/(fn(r)*fn(n-r));
}
int main()
{
	int n = 0;
	int r = 0;
	cin>>n>>r;
	cout<<cnr(n,r)<<endl;
	return 0; 
}
#include<iostream>
using namespace std;
double cnr(int n,int r)
{
	if(r == 0)
	{
		return 1;
	}
	if(r == 1)
	{
		return n;
	}
	else
	{
		return cnr(n, r-1) * (n - r + 1)/r;
	}
}
int main()
{
	int n = 0;
	int r = 0;
	cin>>n>>r;
	cout<<cnr(n,r)<<endl;
	return 0;
}
