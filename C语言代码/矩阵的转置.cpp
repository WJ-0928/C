//�����ת��:����������л����õ����¾����Ϊת�þ���ת�þ��������ʽ���䡣
#include<iostream>
using namespace std;
int main()
{
	int a[3][4],b[4][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cin>>a[i][j];
			b[j][i]=a[i][j];//����ֵ����ת��
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%3d",b[i][j]);
            printf("\n");
		}
	}
}
