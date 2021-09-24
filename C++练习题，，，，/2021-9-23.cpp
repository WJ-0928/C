#include<iostream>
using namespace std;

//void Swap(int& left, int& right) {
//	int temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(double& left, double& right) {
//	double temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right) {
//	char temp = left;
//	left = right;
//	right = temp;
//}



//template<typename T>
//T Add(T& left, T& right) {
//	return left + right;
//}

//template<class T> 
//
//T Add(const T& left, const T& right) {
//	return left + right;
//}
//int main()
//{
//	int a1 = 1, a2 = 2;
//	double d1 = 1.0, d2 = 2.0;
//	Add(a1, a2);
//	Add(d1, d2);
//
//	/*
//	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅
//	Add(a1, d1);
//	*/
//
//	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
//	Add(a, (int)d);
//	return 0;
//}
//template<class T>
//
//T Add(const T& left, const T& right) {
//	return left + right;
//}
//int main(void) {
//
//	// 显式实例化
//	Add<int>(1, 12.0);
//	return 0;
//}


//// 普通函数
//int Add(int left, int right)
//{
//    return left + right;
//}
//// 函数模板
//template<class T>
//T Add(T left, T right) {
//    return left + right;
//}
//void Test()
//{
//    Add(1, 2); // 与非模板函数匹配，编译器不需要特化
//    Add<int>(1, 2); // 调用编译器特化的Add版本
//}

//
//// 普通函数
//int Add(int left, int right)
//{
//	return left + right;
//}
//// 函数模板
//template<class T，class U>
//T Add(T left, U right) {
//	return left + right;
//}
//void Test()
//{
//	Add(1, 2); // 与非函数模板类型完全匹配，不需要函数模板实例化
//	Add(1, 2.0); // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


template<class T>

class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		capacity = capacity < 10 ? 10 : capacity;
		_array = new T[capacity];
		_capacity = capacity;
		_size = 0;
	}
	//在类中声明，类外定义
	~SeqList() {}
private:
	T* _array;
	int _size;
	int _capacity;
};
template<class T>
SeqList<T>::~SeqList()
{
	if (_array)
	{
		delete[] _array;
		_array = nullptr;
		_capacity = 0;
		_size = 0;
	}
}

int main()
{
	// SeqList类名，SeqList<int>才是类型
	SeqList<int> s1;

	SeqList<double> s2;
}