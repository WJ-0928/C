#include<stdio.h>
int main()
{
	int i,max=0,a[10];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
				max=a[i];
		}
	}
	printf("%d\n",max);
	return 0;
 } 
