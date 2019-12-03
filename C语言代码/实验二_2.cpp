//2、编写函数，其原型为：void index(int a[], int n,int &sub)。
//功能：在大小为n的数组a中，查找某个数sub，
//若找到，将对应数组元素的下标赋给sub，若没找到，将-1赋给sub，
//在主调函数中通过判断sub的值来判断数组中是否有该数。
//在这里，sub是引用类型的参数，但起返回值的作用。
#include<iostream>
using namespace std;
void index(int a[], int n,int &sub)
{
	int i = 0;
	if (NULL == a || n < 1)
	{
		sub = -1;
	 	return ;
	}
	else
	{
		for(i=0; i<n; i++)
		{
			if(a[i] == sub)
			{
				sub = i;
				return ;//为什么break 不行？？？ 
			}
		}
		sub = -1;
	}
}
int main()
{
	int arr[100]={0};
	int sub = 0;
	int n = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cin>>sub;	
	index(arr,n,sub);
	cout<<sub;
	return 0;
}
