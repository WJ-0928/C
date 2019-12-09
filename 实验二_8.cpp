//8、阅读下列四段程序，每段程序都有不合理的地方，分析什么地方不合理，解释原因。
//程序一：
#include <iostream>
using namespace std;
void GetMemory(char *p)
{
	p = new char[100];
}
int main(void) 
{
	char *str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	cout << str;
	return 0;
}
//传入GetMemory（char* p)函数的形参为字符串指针，
//在函数内部修改形参并不能真正的改变传入形参的值。
//执行完后的str仍然为NULL。编译器总是要为每个参数制作临时副本，
//指针参数p的副本是_p，编译器使_p=p。
//如果函数体内的程序修改了_p的内容，
//就导致参数p的内容作相应的修改，这
//就是指针可以用作输出参数的原因。
//在本例中，_p申请了新的内存，只是把_p所指的内存地址改变了，
//但是p丝毫未变。所以GetMemory并不能输出任何东西。
//事实上，每执行一次GetMemory就会泄露一块内存，因为没有用free释放内存。

////程序二：
#include <iostream>
using namespace std;
void GetMemory(char **p)
{
	*p = new char[100];
}
int main() 
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	cout << str;
	return 0;
}
/*动态分配的内存不会自动释放；
 没有测试是否成功分配了内存，应该有if (*p == NULL) { ……} 
 之类的语句处理内存分配失败的其情况。*/
////程序三：
#include <iostream>
using namespace std;
char* GetMemory()
{
	char p[5] = {'a', 'b', 'c', 'd', '\0'};
	return p;
}
int main(void) 
{
	char *str = NULL;
	str = GetMemory();
	cout << str;
	return 0;
}
/*字符数组p存在于栈空间，是局部变量，函数返回后，
内存空间被释放，因此输出无效值。
字符数组的值是可以修改的，例如p[0] = 't'。*/
////程序四：
#include <iostream>
using namespace std;
int main(void) 
{
	char *str = new char[100];
	strcpy(str, "hello");
	delete[] str;
	if(str != NULL)
	{
		strcpy(str, "world");	
		cout << str;
	}
	return 0;
}
/*程序出现了野指针。
当我们用new为一个指针分配一个空间后, 用完这个指针，
把它delete掉，但是没有让这个指针指向NULL或某一个特定的空间。
如上面程序一样，将str进行free后，只是释放了指针所指的内存，
但指针并没有释放掉，此时指针所指的是垃圾内存；这样的话，if语句永为真，if判断无效。
*/
