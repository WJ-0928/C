//ѭ���ӱ�׼�������ĳ��Ա�Ĺ���ʱ�䣨��Сʱ�ƣ���ÿСʱ�Ĺ����������㲢������Ĺ��ʡ���׼���£�����Ա�¹���Сʱ����40Сʱ���򳬹����ְ�ԭ���ʵ�1.5���ļӰ๤�������㡣����Ա�¹���Сʱ����50Сʱ���򳬹�50�Ĳ��ְ�ԭ���ʵ�3 ���ļӰ๤�������㣬��40��50Сʱ�Ĺ����԰���ԭ���ʵ�1.5���ļӰ๤�������㡣
//�������ݣ�
//���룺30  4 �����120
//���룺45  4.5 �����213.75
//���룺60  5 �����425
//���룺0   0 �������
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double hour,m,g;
    cout<<"Please input employee's work time and wage_per_hour:";
    while (cin>>hour>>m&&(hour!=0||m!=0)){
		    if(hour>40&&hour<=50){
    		    g=1.5*m*(hour-40)+m*40;
	    	}
	    	else if(hour>50)
	    	{
    			g=1.5*m*10+3*m*(hour-50)+40*m;
	    	}
	    	 else if(hour<=40&&hour>0){
	    	 	g=hour*m;
			 }
	    cout<<"he employee's wage :" <<g<<endl;
   	}
    	
    
	return 0;
}
