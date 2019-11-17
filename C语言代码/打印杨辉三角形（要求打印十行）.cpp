//打印杨辉三角形（要求打印十行）
#include<iostream>
using namespace std;
int main()
{
	long i,j,n=10,k;
    cin>>n; //若只要10行，把这里改成n=10即可
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<i;j++)
        {
            printf("%ld ",k); 
            k=k*(i-j)/j;
        }
        printf("1\n");
    }
}
