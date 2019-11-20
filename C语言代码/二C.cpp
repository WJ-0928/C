#include<iostream>
using namespace std;
class Point
{
    int x,y;
public:
    void  SetPoint(int n,int m){
    	x=n;
    	y=m;
	}
	void ShowPoint(){
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
