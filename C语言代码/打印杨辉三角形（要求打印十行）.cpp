//��ӡ��������Σ�Ҫ���ӡʮ�У�
#include<iostream>
using namespace std;
int main()
{
	long i,j,n=10,k;
    cin>>n; //��ֻҪ10�У�������ĳ�n=10����
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
