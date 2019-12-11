//循环从标准输入读入某雇员的工作时间（以小时计）和每小时的工资数，计算并输出他的工资。标准如下：若雇员月工作小时超过40小时，则超过部分按原工资的1.5倍的加班工资来计算。若雇员月工作小时超过50小时，则超过50的部分按原工资的3 倍的加班工资来计算，而40到50小时的工资仍按照原工资的1.5倍的加班工资来计算。
//测试数据：
//输入：30  4 输出：120
//输入：45  4.5 输出：213.75
//输入：60  5 输出：425
//输入：0   0 程序结束
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
