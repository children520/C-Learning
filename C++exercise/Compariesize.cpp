#include "stdafx.h"
#include <iostream>
using namespace std;
//比较大小
int main(){
	int a,b;
	cout<<"请输入两个数字：";
	cin>>a>>b;
	a>b?cout<<a<<"大于"<<b<<endl:cout<<b<<"大于"<<a<<endl;
	return 0;
}