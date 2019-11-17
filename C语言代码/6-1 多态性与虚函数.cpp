//通过本题目的练习可以掌握多态性的概念和虚函数的定义和使用方法
//要求定义一个基类Pet，它有一个成员函数Speak()用于输出pet的叫声。;派生类Dog和Cat从基类Pet派生而来。他们从基类继承并重新改写了speak()函数，分别用于输出Dog类和Cat类的叫声。要求利用虚函数编写代码，使得程序能够输出下面的内容。
//Input

//无
//Output

//输出数据共有3行，本题目要求输出内容必须与示例中的相同。
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

