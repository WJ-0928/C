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
//	����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������
//	ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��
//	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
//	ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ�
//	Add(a1, d1);
//	*/
//
//	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����
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
//	// ��ʽʵ����
//	Add<int>(1, 12.0);
//	return 0;
//}


//// ��ͨ����
//int Add(int left, int right)
//{
//    return left + right;
//}
//// ����ģ��
//template<class T>
//T Add(T left, T right) {
//    return left + right;
//}
//void Test()
//{
//    Add(1, 2); // ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
//    Add<int>(1, 2); // ���ñ������ػ���Add�汾
//}

//
//// ��ͨ����
//int Add(int left, int right)
//{
//	return left + right;
//}
//// ����ģ��
//template<class T��class U>
//T Add(T left, U right) {
//	return left + right;
//}
//void Test()
//{
//	Add(1, 2); // ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����
//	Add(1, 2.0); // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add����
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
	//���������������ⶨ��
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
	// SeqList������SeqList<int>��������
	SeqList<int> s1;

	SeqList<double> s2;
}