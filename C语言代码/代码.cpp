


/* 
#include<stdio.h>
int main()
{
	int a[10];
	int i,n=0,sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<=0)
		{
			sum=sum+a[i];
			n++;
		}
	}
	printf("非正数的个数%d,和是%d\n",n,sum); 
}
/*
#include<stdio.h>
int main()
{
	int n,t,number=15;
	float a=2,b=1,s=0;
	for(n=1;n<=number;n++)
	{
		s=s+a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("%9.6f\n",s);
}
#include<stdio.h>
int main()
{
	int i;
	for(i=100;i>0;i--)
	{
	    if(i%31==0)
	    {
	    	break;
		}	
	}
	printf("%d\n",i);
}
/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a[3][4]={{60,70,65,75},{75,80,75,90},{95,75,90,65}};
	int i,j;
	float ave1,ave2,ave3,sum1=0,sum2=0,sum3=0;
	for(i=0;i<=2;i++)
	{
		if(i==0)
		{
			for(j=0;j<=3;j++)
			{
				sum1=sum1+a[i][j];
			}
			ave1=sum1/4;
			printf("第一位总分，平均分为：%.1f,%.1f\n",sum1,ave1);
		}
		if(i==1)
		{
			for(j=0;j<=3;j++)
			{
				sum2=sum2+a[i][j];
			}
			ave2=sum2/4;
			printf("第二位总分，平均分为：%.1f,%.1f\n",sum2,ave2);
		}
		if(i==2)
		{
			for(j=0;j<=3;j++)
			{
				sum3=sum3+a[i][j];
			}
			ave3=sum3/4;
			printf("第三位总分，平均分为：%.1f,%.1f\n",sum3,ave3);
		}
		if(i==3)
		{
			break;
		}
	}
	return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>
#define Length 40
int main()
{
	int Nums[Length]={0},i;
	for(i=0;i<Length;i++)
	{
		if(i<2)
		{
			Nums[i]=1;
		}
		else
		{
			Nums[i]=Nums[i-1]+Nums[i-2];
		}
		printf("%d\n",Nums[i]);
	}
}



/*
#include<iostream>
using namespace std;
int main()
{
	int a=0,n,k,sum=0;
	cin>>a>>n;
	for( int i=1;i<=n;i++){
		sum=a;
		k=k*10+a;
		sum+=k;
	}
	cout<<sum<<endl;
}
*/
