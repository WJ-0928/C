//8���Ķ������Ķγ���ÿ�γ����в�����ĵط�������ʲô�ط�����������ԭ��
//����һ��
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
//����GetMemory��char* p)�������β�Ϊ�ַ���ָ�룬
//�ں����ڲ��޸��ββ����������ĸı䴫���βε�ֵ��
//ִ������str��ȻΪNULL������������ҪΪÿ������������ʱ������
//ָ�����p�ĸ�����_p��������ʹ_p=p��
//����������ڵĳ����޸���_p�����ݣ�
//�͵��²���p����������Ӧ���޸ģ���
//����ָ������������������ԭ��
//�ڱ����У�_p�������µ��ڴ棬ֻ�ǰ�_p��ָ���ڴ��ַ�ı��ˣ�
//����p˿��δ�䡣����GetMemory����������κζ�����
//��ʵ�ϣ�ÿִ��һ��GetMemory�ͻ�й¶һ���ڴ棬��Ϊû����free�ͷ��ڴ档

////�������
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
/*��̬������ڴ治���Զ��ͷţ�
 û�в����Ƿ�ɹ��������ڴ棬Ӧ����if (*p == NULL) { ����} 
 ֮�����䴦���ڴ����ʧ�ܵ��������*/
////��������
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
/*�ַ�����p������ջ�ռ䣬�Ǿֲ��������������غ�
�ڴ�ռ䱻�ͷţ���������Чֵ��
�ַ������ֵ�ǿ����޸ĵģ�����p[0] = 't'��*/
////�����ģ�
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
/*���������Ұָ�롣
��������newΪһ��ָ�����һ���ռ��, �������ָ�룬
����delete��������û�������ָ��ָ��NULL��ĳһ���ض��Ŀռ䡣
���������һ������str����free��ֻ���ͷ���ָ����ָ���ڴ棬
��ָ�벢û���ͷŵ�����ʱָ����ָ���������ڴ棻�����Ļ���if�����Ϊ�棬if�ж���Ч��
*/
