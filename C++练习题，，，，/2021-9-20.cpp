#include<iostream>
using namespace std;

//int main()
//{
//	int array[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	cout << &array << endl;
//	cout << &array + 1 << endl;
//
//	cout << array << endl;
//	cout << array + 1 << endl;
//
//	cout << &array[0] << endl;
//	cout << (&array[0]) + 1 << endl;
//
//	return 0;
//}


//C++为什么要搞一套动态内存管理？
//首先：C语言中的动态内存管理方式在C++中仍然可以使用
//原因：1、C语言中的方式比较麻烦---需要用户手动算字节数，需要对返回结果强转，需要判空，需要包含头文件
//		2、malloc、free:不会调用构造函数/析构函数；new、delete：在进行空间申请和释放时是会调用构造函数和析构函数的
// 
// C++中动态内存管理方式：new/delete----申请单个类型的空间
// new[]/delete[]-----申请释放一段连续的空间
//注意：1、new/delete不是函数，是C++中的关键字||操作符
//		2、new的空间必须要有delete释放  new[]必须使用delete[]释放

#if 0
class Test
{
public:
	Test()
		:_t(10)
	{
		cout << "Test():" << this << endl;
	}
	~Test()
	{
		cout << "~Test():" << this << endl;
	}

	int _t;
};

//new/delete和new[]/delete[]使用说明
void Test1()
{
	int* p1 = new int;
	int* p2 = new int(100);
	int* p3 = new int[10];
	int* p4 = new int[10]{ 1,2,3,4,5,6,7,8,9,0 };

	delete p1;
	delete p2;
	delete[] p3;
	delete[] p4;
}
void Test2()
{
	//malloc并不是创建了一个Test类型的对象，只是在堆上申请了一块与Test类型大小相同的一块空间
	//因为：malloc不调用构造函数
	Test* p1 = (Test*)malloc(sizeof(Test));//malloc不会调用构造函数
	if (nullptr == p1)
		return;
	
	//真正创建了一个对象，该对象的空间在堆上
	Test* p2 = new Test;//new在申请空间期间会调用构造函数

	free(p1);//:在释放空间期间，不会调用析构函数
	delete p2;//:在释放空间期间，会调用对象的析构函数
}
/*
在C++中，如果想要在堆上申请空间：
1、采用C语言中的malloc、calloc、realloc，但是并不能申请对象的空间
2、采用new/new[]---可以调用构造函数，注意：如果使用new[]申请连续的空间是，该类必须提供无参或全缺省的构造函数
*/
int main()
{
	Test2();
	return 0;
}

#endif