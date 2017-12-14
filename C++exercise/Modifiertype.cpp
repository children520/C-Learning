#include "stdafx.h"
#include <iostream>
using namespace std;
/*
有符号和无符号整数之间的差别
*/
int main()
{
	short int i;
	short unsigned int j;
	j=50000;
	i=j;
	cout<<i<<" "<<j;
	return 0;
}