//编写字符串反转函数mystrrev()。
//该函数功能是将指定字符串中的字符顺序颠倒排列，然后再编写主函数进行验证。函数原型为：
//void mystrrev( char string[]);。

#include<iostream>
using namespace std;
void mystrtev(char str[])
{
    int i;
    int len=0;
    while(str[i]!='\0'){
    len++;//统计字符串的长度
    i=i+1;
    }
   //cout<<"该字符串的长度为"<<len<<endl; 
   //进行顺序颠倒的思想是将字符串整体后移，然后往前移动
    for(i=0;i<len;i++)//整体后移 
    {
        str[2*(len-1)-i]=str[i];
    } 
    for(i=len-1;i<=2*(len-1);i++)//往前平移 
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
//cout<<"请输入字符串："; 
    cin.getline(a,N);//输入也是对的 
//cout<<"反转后的字符串为："<<endl;
    mystrtev(a);
    cout<<endl; 
 }

