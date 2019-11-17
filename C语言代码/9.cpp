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
	//*p1 = 100; 我们可以修改他所指向的值，但不能修改指针的值 
	//p2 = &a;//我们可以修改他所指向的值，但不能修改指针的值 
	*p2 = a;
	//p3 = &b;我们可以修改他所指向的值，但不能修改指针的值 
	//*p3 = 100;我们可以修改他所指向的值，但不能修改指针的值 
	return 0;
}
