/*
* 1，运算符优先级问题  ~ 》 + 》 >>  
2，在做运算符问题的时候会将char 类型转换为int计算，最后再讲到之前的类型。  
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a>>4+1;

	printf("b = %d\n",b);
//	cout <<b;
	return 0;
}
