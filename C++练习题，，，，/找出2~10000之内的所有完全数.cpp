//�ҳ�2~10000֮�ڵ�������ȫ����
//��ν��ȫ������������֮�����õ��ڸ�������
//��6=1+2+3��28=1+2+4+7+14������6��28������ȫ����


#include<iostream>
using namespace std;
int  main(){
 
	int i,j,s;
	
	for(i=2;i<=10000;i++){
		
		s = 0;
		for(j=1;j<i;j++)
			if(i%j==0)
				s+=j;
			if(i==s)
				printf("%d\n",s);
	}
}
