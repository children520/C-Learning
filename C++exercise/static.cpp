#include "stdafx.h"
#include <iostream>
/*
static �洢��ָʾ�������ڳ�������������ڱ��־ֲ������Ĵ���
������Ҫ��ÿ����������뿪������ʱ���д���������
*/
//��������
void func(void);
static int count=10;
int main()
{
	while(count--)
	{
		func();
	}
	return 0;
}
void func(void)
{
	static int i=5;
	i++;
	//std �Ǳ�׼�⺯��ʹ�õ������ռ䣬�� standard����׼������д
	std::cout<<"����iΪ"<<i;
	std::cout<<",����countΪ"<<count<<std::endl;
}
/*
ʹ�� thread_local ˵���������ı����������������ϴ������߳��Ϸ��ʡ�
�����ڴ����߳�ʱ����
���������߳�ʱ����
thread_local int x;
class X
{
	static thread_local std::string s;
};
static thread_local std::string X::s;

void foo()
{
	thread_local std::vector<int> v;