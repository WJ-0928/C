//ͨ������Ŀ����ϰ�������ն�̬�Եĸ�����麯���Ķ����ʹ�÷���
//Ҫ����һ������Pet������һ����Ա����Speak()�������pet�Ľ�����;������Dog��Cat�ӻ���Pet�������������Ǵӻ���̳в����¸�д��speak()�������ֱ��������Dog���Cat��Ľ�����Ҫ�������麯����д���룬ʹ�ó����ܹ������������ݡ�
//Input

//��
//Output

//������ݹ���3�У�����ĿҪ��������ݱ�����ʾ���е���ͬ��
//Sample Input
//Sample Output
//How does a pet speak ?
///miao!miao!
//wang!wang!

#include<iostream>
using namespace std;
class Pet
{
public:
	virtual void Speak(){};
};
class Dog:public Pet
{
	public:
	    virtual void Speak(){
		cout<<"wang!wang!"<<endl;
		}	
};
class Cat:public Pet
{
	public:
	    virtual void Speak(){
		cout<<"miao!miao!"<<endl;
		}	
};
int main()
{
	cout<<"How dose a pet speak ?"<<endl;
	Cat c;
	c.Speak();
	Dog d;
	d.Speak();
}

