//掌握不同数据之间的混合算术运算时数据类型的转换规则
#include <iostream> 
#include <typeinfo>
using namespace std;
int main() 
{	bool b = true;	
	short s = 3;
	int i = 1; 
	float f = 1.0; 
	unsigned int ui = 3;
	cout << "b type: "<< typeid(b).name() << endl;
	cout << "s type: " << typeid(s).name()<< endl;
	cout << "i type: " << typeid(i).name()<< endl;
	cout << "f type: " << typeid(f).name()<< endl;
	cout << "ui type: " << typeid(ui).name()<< endl;
	cout << "b + b type: " << typeid(b +b).name() << endl;
	cout << "'a' + 'b' type: " << typeid('a' + 'b').name() << endl;
	cout << "s + s type: " << typeid(s + s).name() << endl;
	cout << "'a' + i + f type: " << typeid('a' + i + f).name() << endl;
	cout << "'a' + 3.14 type: " << typeid('a' + 3.14).name() << endl;
	cout << "123 + 123L type: " << typeid(123 + 123L).name() <<endl;
	cout << "123L + 123U type: " << typeid(123L + 123U).name() << endl;
	cout << "123 + ui type: " << typeid(123 + ui).name() << endl;
	return 0;
}
