#include<iostream>
using namespace std;
void swap(int arr1[],int arr2[],int leng)
{
	int i=0;
	for(i=0;i<leng;i++)
	{
		int t=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=t;
	 } 
}
int main()
{
	int i=0;
	int arr1[5];
	int arr2[5];
	for(i=0;i<5;i++)
	{
		cin>>arr1[i];
	}
	for(i=0;i<5;i++)
	{
		cin>>arr2[i];
	}
	swap(arr1,arr2,sizeof(arr1)/sizeof(arr1[0]));
	for(i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++)
	{
		cout<<arr1[i];
	}
	cout<<"\n";
	for(i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++)
	{
		cout<<arr2[i];
	}
	cout<<"\n";
	
}
