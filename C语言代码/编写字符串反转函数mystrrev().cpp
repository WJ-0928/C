//��д�ַ�����ת����mystrrev()��
//�ú��������ǽ�ָ���ַ����е��ַ�˳��ߵ����У�Ȼ���ٱ�д������������֤������ԭ��Ϊ��
//void mystrrev( char string[]);��

#include<iostream>
using namespace std;
void mystrtev(char str[])
{
    int i;
    int len=0;
    while(str[i]!='\0'){
    len++;//ͳ���ַ����ĳ���
    i=i+1;
    }
   //cout<<"���ַ����ĳ���Ϊ"<<len<<endl; 
   //����˳��ߵ���˼���ǽ��ַ���������ƣ�Ȼ����ǰ�ƶ�
    for(i=0;i<len;i++)//������� 
    {
        str[2*(len-1)-i]=str[i];
    } 
    for(i=len-1;i<=2*(len-1);i++)//��ǰƽ�� 
    {
        str[i-(len-1)]=str[i];
    }
    for(i=0;i<len;i++){
    cout<<str[i]; 
    }
 
}
int main()
{
    const int N=101;
    char a[N];
//cout<<"�������ַ�����"; 
    cin.getline(a,N);//����Ҳ�ǶԵ� 
//cout<<"��ת����ַ���Ϊ��"<<endl;
    mystrtev(a);
    cout<<endl; 
 }

