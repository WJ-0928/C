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


//C++ΪʲôҪ��һ�׶�̬�ڴ����
//���ȣ�C�����еĶ�̬�ڴ����ʽ��C++����Ȼ����ʹ��
//ԭ��1��C�����еķ�ʽ�Ƚ��鷳---��Ҫ�û��ֶ����ֽ�������Ҫ�Է��ؽ��ǿת����Ҫ�пգ���Ҫ����ͷ�ļ�
//		2��malloc��free:������ù��캯��/����������new��delete���ڽ��пռ�������ͷ�ʱ�ǻ���ù��캯��������������
// 
// C++�ж�̬�ڴ����ʽ��new/delete----���뵥�����͵Ŀռ�
// new[]/delete[]-----�����ͷ�һ�������Ŀռ�
//ע�⣺1��new/delete���Ǻ�������C++�еĹؼ���||������
//		2��new�Ŀռ����Ҫ��delete�ͷ�  new[]����ʹ��delete[]�ͷ�

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

//new/delete��new[]/delete[]ʹ��˵��
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
	//malloc�����Ǵ�����һ��Test���͵Ķ���ֻ���ڶ���������һ����Test���ʹ�С��ͬ��һ��ռ�
	//��Ϊ��malloc�����ù��캯��
	Test* p1 = (Test*)malloc(sizeof(Test));//malloc������ù��캯��
	if (nullptr == p1)
		return;
	
	//����������һ�����󣬸ö���Ŀռ��ڶ���
	Test* p2 = new Test;//new������ռ��ڼ����ù��캯��

	free(p1);//:���ͷſռ��ڼ䣬���������������
	delete p2;//:���ͷſռ��ڼ䣬����ö������������
}
/*
��C++�У������Ҫ�ڶ�������ռ䣺
1������C�����е�malloc��calloc��realloc�����ǲ������������Ŀռ�
2������new/new[]---���Ե��ù��캯����ע�⣺���ʹ��new[]���������Ŀռ��ǣ���������ṩ�޲λ�ȫȱʡ�Ĺ��캯��
*/
int main()
{
	Test2();
	return 0;
}

#endif