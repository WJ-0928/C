# include<stdio.h>
 
int main(void)
 
{
 
 int a[10];
 
 int b;
 
 int c = 0; //这个程序要求最大值，假定输入的都是非负数，c的初值开始就是最小的(或比最小值更小的数）
 
 printf("输入十个数\n");
 
 for(b=0;b<10;b++)
 
 {
 
  scanf("%d",&a[b]); 
 
  if(c<a[b]) c=a[b]; //如果新输入的数比c大，就令c等于新输入的数（当前最大数） 
 
 }
 
 printf("最大值%d\n",c);
 
 return 0;
 
}
