#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&c+b>a){
		if(a==b&&b==c&&a==c){
			printf("1\n");
		}
		else if(a==b||b==c||a==c)
		{
			printf("2\n");
		}
		else {
			printf("3\n");
		}
	} 
	else{
		printf("-1\n");
	}
	return 0;
 } 
