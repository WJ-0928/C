//��дһ�����������n����ͬ������ȡr����������ѡ��ĸ����������ֵΪ��
//���У� n! = n*(n-1)*(n-2)*...*1��Ҫ�󣺷ֱ��õݹ�ͷǵݹ����ַ�ʽ��ɳ�����ƣ�������
//�����һ��ѭ�������ϴ��������n��r��ֵ������������������û�����0  0ʱ�����������
//�ܼ���������ݵĺϷ��ԣ�Ҫ��n>=1����n>=r��
//��ʾ����1������һ���ǵݹ麯��fn(int n)����n!��������һ������cnr(int n, int r)����Cnr���ڸú����е���fn()��
//���⣺�������ʲô���ı������������n!�������ص�ֵ��ע������������͵��ڴ��ֳ���ͬ�������ܴ�ŵ����ݷ�Χ���ޣ�
//����ν������2������һ���ݹ麯��ʵ�֣�ʵ��ʱ���ù�ʽ��C(n,r) = C(n, r-1) * (n �C r + 1) / r�ݹ�ʵ�֡�
//��� r = 0����C(n, r) = 1����� r = 1, ��C(n, r) = n��
#include<iostream>
using namespace std;
// different numbers
int fn(int n)
{
    int temp = 1;
    for(int i = 1;i<=n;i++)
        temp *= i;
    return temp;
}
int cnr(int n, int r)
{
	int add;
	add=fn(n)/(fn(r)*fn(n-r));
	return add;
}
int main()
{
    int n,r;
    cout<<"input n:";
    cin>>n;
    cout<<"input r:";
    cin>>r;
    cout<<"the answer is:"<<cnr(n,r) <<endl;
    return 0;
}
