#include "stdafx.h"
#include <iostream>
using namespace std;
int max(int num1,int num2)
{
	int result;
	if(num1>num2)
		result=num1;
	else
		result=num2;
	return result;
}
int main(){
	int a=100;
	int b=200;
	int ret;
	ret=max(a,b);
	cout<< "Max values is:"<<ret<<endl;
	return 0;
}
//函数声明：int max(inx num1,int num2)

/*
//指针调用

void swap(int *x,int *y)
{
	int temp;
	temp=*x;//保存地址x的值
	*x=*y;//把y赋值给x
	*y=temp//把x赋值给y
	return ;
}
//swap(&a,&b);
*/


/*
//引用调用
向函数传递参数的引用调用方法，把引用的地址复制给形式参数
void swap(in &x,int &y)
{
int temp;
x=y;
x=y;
y=temp;
retrun;
}
swap(a,b);

lambda表达式
eg:[](int x,int y){return x<y;}
// 定义简单的lambda表达式
auto basicLambda = [] { cout << "Hello, world!" << endl; };

// 调用
basicLambda();
// 输出：Hello, world!