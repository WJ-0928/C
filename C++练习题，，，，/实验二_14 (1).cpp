//14、编写程序
//编写一程序（应该有多个函数），允许从键盘输入任意多个英语单词（单词可以重复），
//中间用空格分开，输入0表示输入结束。该程序可以统计同一个英语单词被输入几次，
//最后对英文单词按字典顺序输出，后面跟上该单词被输入的次数。
//(提示，尝试用结构体组织数据，把单词和该单出现的次数用一个结构体来描述。)
//比如输入： book am book is book am 0
//输出：am 2
//	  book 3
//	  is 1
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define N 999
int i = 1;
struct WORD//结构体用来存储单词以及其出现的次数
{
	string str;
	int num;
};
int main()
{
	WORD word[N];
	char a[N];  //存储输入的字符串
	int k = 0, m = 0,j = 0;
	cout << "input words:" << endl;
	for (j = 0; j<N; j++)
	{
		cin >> a[j];
		m++;  //m用来统计输入的字符个数
		if (a[j] == '0') break;//输入0表示输入结束
	}
	char *p = a;
	for (j = 0; j<m; j++)
	{

		if (*p == ' ') //当指针指向空格的时候就存储一个单词
		{
			i++;//i用来统计单词个数
			k++;//k 用来表示要存储单词结构体的下标
		}
		else 
			word[k].str += a[j];
			p++;//每进行一个字符判断知真相后移动一次
		if (*p == '0')  
			break;//当指针指向0的时候停止往结构体存入单词
	}
	for (j = 0; j<i - 1; j++)//将单词按字典顺序排序
	{
		string temp;
		for (k = j; k<i; k++)
		{
			if (word[j].str>word[k].str)
			{
				temp = word[j].str;
				word[j].str = word[k].str;
				word[k].str = temp;
			}
		}
	}
	for (j = 0; j<i; j++)
	{
		word[j].num = 0;//初始化每个单词的数量
		for (k = j; k<i; k++)
		{

			if (word[j].str == word[k].str) //统计没个单词的个数
			{
				word[j].num++;
			}
		}
		cout << setw(15)//控制域宽
			<< setiosflags(ios::left)//左对齐
			<< word[j].str << "     number:" << word[j].num << endl;
		j += word[j].num - 1;//当有重复的单词时j就跳过重复出现的单词
	}
	return 0;
}

