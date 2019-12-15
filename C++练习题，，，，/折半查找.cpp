//写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回-1.（折半查找） 

#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int left=0;
	int right=(sizeof(arr)/sizeof(arr[0]))-1;
	int key=4;
	int mid=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>key)
		{
			right=mid-1;
		}
		else if(arr[mid]<key)
		{
			left=mid+1;
		}
		else
		    break;
	}
	if(left<=right)
	{
		printf("找到了，下标是 %d\n",mid);
	}
	else
	{
		printf("-1\n");
	}
	return 0;
 } 
