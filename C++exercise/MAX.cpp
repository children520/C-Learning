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
//����������int max(inx num1,int num2)

/*
//ָ�����

void swap(int *x,int *y)
{
	int temp;
	temp=*x;//�����ַx��ֵ
	*x=*y;//��y��ֵ��x
	*y=temp//��x��ֵ��y
	return ;
}
//swap(&a,&b);
*/


/*
//���õ���
�������ݲ��������õ��÷����������õĵ�ַ���Ƹ���ʽ����
void swap(in &x,int &y)
{
int temp;
x=y;
x=y;
y=temp;
retrun;
}
swap(a,b);

lambda���ʽ
eg:[](int x,int y){return x<y;}
// ����򵥵�lambda���ʽ
auto basicLambda = [] { cout << "Hello, world!" << endl; };

// ����
basicLambda();
// �����Hello, world!