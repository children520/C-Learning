#include "stdafx.h"
#include <iostream>
/*
static 存储类指示编译器在程序的生命周期内保持局部变量的存在
而不需要在每次它进入和离开作用域时进行创建和销毁
*/
//函数声明
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
	//std 是标准库函数使用的命名空间，是 standard（标准）的缩写
	std::cout<<"变量i为"<<i;
	std::cout<<",变量count为"<<count<<std::endl;
}
/*
使用 thread_local 说明符声明的变量仅可在它在其上创建的线程上访问。
变量在创建线程时创建
并在销毁线程时销毁
thread_local int x;
class X
{
	static thread_local std::string s;
};
static thread_local std::string X::s;

void foo()
{
	thread_local std::vector<int> v;