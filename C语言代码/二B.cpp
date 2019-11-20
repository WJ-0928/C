#include<iostream>
using namespace std;
class Max
{
	
public:
	void max(){
	int a,b,c,max;
	cin>>a>>b>>c;
		max=c;
		if(a>max)
			max=a;
		else if(b>max)
			max=b;
		cout<< max;
    }
};
int main()
{
	Max max;
	max.max();
	return 0;
}
