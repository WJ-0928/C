//6�����յݹ麯���ı�д������
//��дһ�����������n����ͬ������ȡr����������ѡ��ĸ����������ֵΪ��
//���У� n! = n*(n-1)*(n-2)*...*1��Ҫ�󣺷ֱ��õݹ�ͷǵݹ����ַ�ʽ��ɳ�����ƣ�
//�����������һ��ѭ�������ϴ��������n��r��ֵ��
//����������������û�����0  0ʱ������������ܼ���������ݵĺϷ��ԣ�Ҫ��n>=1����n>=r��
//��ʾ����1������һ���ǵݹ麯��fn(int n)����n!��
//������һ������cnr(int n, int r)����Cnr���ڸú����е���fn()��
//���⣺�������ʲô���ı������������n!�������ص�ֵ��
//ע������������͵��ڴ��ֳ���ͬ�������ܴ�ŵ����ݷ�Χ���ޣ�����ν����
//2������һ���ݹ麯��ʵ�֣�ʵ��ʱ���ù�ʽ��C(n,r) = C(n, r-1) * (n �C r + 1) / r�ݹ�ʵ�֡�
//��� r = 0����C(n, r) = 1����� r = 1, ��C(n, r) = n��
#include<iostream>
using namespace std;
double fn(int n)
{
	int j = 0;
	double sum = 1;
	for(j = 1; j <= n; j++)
	{
		sum*=j;
	}
	return sum; 
}
double cnr(int n,int r)
{
	return fn(n)/(fn(r)*fn(n-r));
}
int main()
{
	int n = 0;
	int r = 0;
	cin>>n>>r;
	cout<<cnr(n,r)<<endl;
	return 0; 
}
#include<iostream>
using namespace std;
double cnr(int n,int r)
{
	if(r == 0)
	{
		return 1;
	}
	if(r == 1)
	{
		return n;
	}
	else
	{
		return cnr(n, r-1) * (n - r + 1)/r;
	}
}
int main()
{
	int n = 0;
	int r = 0;
	cin>>n>>r;
	cout<<cnr(n,r)<<endl;
	return 0;
}
