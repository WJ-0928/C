#include<iostream>
using namespace std;
class Time
{
	int hour,minute,second;
public:
	void set(){
		cin>>hour>>minute>>second;
	}
	int setHour(){
	    if(hour>12||hour<0){
	    	hour=12;
	    }
		return hour;
	}
	int setMinue(){
		if(minute>60||minute<0){
			minute=00;
		}
		return minute;
	}
	int setSecond(){
		if(second>60||second<0){
			second=00;
		}
		return second;
	}
	void show(){
		printf("%02d:%02d:%02d",hour,minute,second);
	}
 } ;
 int main()
 {
 	Time a;
 	a.set();
 	a.setHour();
 	a.setMinue();
 	a.setSecond();
 	a.show();
 	return 0;
 }
