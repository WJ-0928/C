//��0��4������֣������λ����ÿ��������һ�Σ�
//��ʮλ�Ͱ�λ����Ϊ3����Ȼ��λ����Ϊ0����
//������п��ܵ���λ����

#include<iostream>
int main()
{
    int a,b,c,d,e,h;
    for(a=0;a<=4;++a){
    for(b=0;b<=4;++b){ 
    for(c=0;c<=4;++c){
    for(d=0;d<=4;++d){
    for(e=1;e<=4;++e){
    if(a==b||b==c||c==d||d==e||b==3||c==3||a==c||a==d||a==e||b==d||b==e||c==e)
    h=h+1;
    else
    {
	    printf("%d%d%d%d%d\n",e,d,c,b,a);
	}
    }
    }
    }
    } 
    }
}

