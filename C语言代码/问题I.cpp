#include <iostream>
#include <iomanip>
using namespace std;
int main()
{float a,b,c;
cin>>a>>b>>c;
cout<<a+b+c<<' '<<a*b*c<<' '<<setiosflags(ios::fixed)<<setprecision(2)<<(a+b+c)/3;
return 0;
}

