#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=100;i<=200;i++){
		for(j=2;j<=i-1;j++){
			if(i%j==0){
			break;//����������������ô�ѭ���������������
	    	}
		}
		if(i==j){//����������û��������
				cout<<i<<endl;
	    	}
	}
	cout<<"\n"<<endl;
	return 0;
} 
