#include <iostream>
using namespace std;
class A
{
	int id;
public:
	A(int i)
	{
		id=i;
		cout<<id<<"--->���캯��"<<endl;
	}
	~A()
	{
		cout<<id<<"--->��������"<<endl;
	}
}; 
int main()
{
    A a(1),b(2);
cout<<"end of main"<<endl;
    return 0;
}

