#include <iostream>
using namespace std;
class A
{
    int id;
public:
	A(int i)
	{
		id=i;
		cout<<i<<"--->构造函数"<<endl;
	 } 
	 ~A()
	 {
	 	cout<<id<<"--->析构函数"<<endl;
	 }
}; 
int main()
{
    A a(1),b(2);
cout<<"end of main"<<endl;
    return 0;
}
