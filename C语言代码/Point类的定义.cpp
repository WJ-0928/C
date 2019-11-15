#include<iostream>
using namespace std;

class Point
{
	int x,y;
public:
    void SetPoint(int a,int b)
	{
		x=a;
		y=b;
	}
	void ShowPoint()
	{
		cout<<"("<<x<<","<<y<<")"<<endl; 
	}
};
int main()
{
	Point a;
	a.SetPoint(10,11);
	a.ShowPoint();
	return 0;
}
 
