#include<iostream>
using namespace std;
class Time
{
	int hour,min,sec;
public:
	void set(){
		cin>>hour>>min>>sec;
	}
	void show(){
		printf("%d:%d:%d",hour,min,sec);
	}
 } ;
 int main()
 {
 	Time t1;
 	t1.set();
 	t1.show();
 	return 0;
 }
