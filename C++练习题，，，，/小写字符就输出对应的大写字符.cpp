//.��дһ�����򣬿���һֱ���ռ����ַ��� 
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ��� 
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ��� 
//��������ֲ������ 

#include<stdio.h>
#include<math.h>
int main()
{
	int ch;
	while((ch=getchar())!=EOF)
	{
		if(ch>='a'&&ch<='z')
        {
        	printf("%c\n",ch-32);
		}	
		else if(ch>='A'&&ch<='Z')
		{
			printf("%c\n",ch+32);
		}
		else if(ch>='0'&&ch<='9')
		{
		    continue;
		}
	}
	printf("\n");
	return 0;
 } 
