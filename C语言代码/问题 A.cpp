#include<iostream> 
using namespace std;
class A
{
public:
	A(int i)
	{
		cout<<"Constructing an object of A"<<endl;
	}
	~A()
	{
		cout<<"Destructing an object of A"<<endl;
	 } 
};
int main()
{
	A a(1),b(2);
	return 0;
}
