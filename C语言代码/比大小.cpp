# include<stdio.h>
 
int main(void)
 
{
 
 int a[10];
 
 int b;
 
 int c = 0; //�������Ҫ�����ֵ���ٶ�����Ķ��ǷǸ�����c�ĳ�ֵ��ʼ������С��(�����Сֵ��С������
 
 printf("����ʮ����\n");
 
 for(b=0;b<10;b++)
 
 {
 
  scanf("%d",&a[b]); 
 
  if(c<a[b]) c=a[b]; //��������������c�󣬾���c�����������������ǰ������� 
 
 }
 
 printf("���ֵ%d\n",c);
 
 return 0;
 
}
