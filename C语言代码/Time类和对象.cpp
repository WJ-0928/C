#include<iostream>
using namespace std;

class Time
{
public:
	int hour,min,sec;
	void set()
	{
		cin>>hour>>min>>sec;
	}
	void show()
	{
		cout<<hour<<":"<<min<<":"<<sec<<endl;
	}
       
};
int main()
{
	Time s;
	s.set();
	s.show();
	return 0;
}
