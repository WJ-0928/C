//找出2~10000之内的所有完全数。
//所谓完全数，即其因子之和正好等于该数本身。
//如6=1+2+3，28=1+2+4+7+14，所以6，28都是完全数。


#include<iostream>
using namespace std;
int  main(){
 
	int i,j,s;
	
	for(i=2;i<=10000;i++){
		
		s = 0;
		for(j=1;j<i;j++)
			if(i%j==0)
				s+=j;
			if(i==s)
				printf("%d\n",s);
	}
}
