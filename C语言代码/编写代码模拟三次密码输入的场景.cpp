//��д����ģ��������������ĳ����� 
 //����������������룬������ȷ����ʾ����¼�ɹ���,������� 
 //�����������룬����������Ρ����ξ�������ʾ�˳�����

#include<stdio.h>
#include<string.h>
int main()
{
	char pws[20]=" ";
	int i=0;
	for(i=0;i<3;++i)
	{
		printf("���������룺\n");
		scanf("%s",pws);
		if(strcmp(pws,"password")==0)
		{
			break;
		}
	}
	if(i==3)
	{
		printf("ֹͣ���룺\n");
	 } 
	 else
	 {
	 	printf("������ȷ��\n");
	 }
	return 0;
}
