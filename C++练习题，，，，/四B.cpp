
#include<iostream>
using namespace std;
class Student
{
	private:
		string num;
		int grade;
	public:
		void get()
		{
			cin>>num>>grade;
		}
		void put()
		{
			cout<<num<<" "<<grade<<endl;
		}
};
int main()
{
	Student a[66];
	int n;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		a[i].get();
	}
	for(int i = 0;i < n;i++)
	{
		a[i].put();
	}	
	return 0;
}
