/*
*
1,
浮点数类型有

float 4字节
double 8字节
long double  大于或等于8字节

以float 为列：

十进制转换二进制：

整数部分： 除以2，余数为系数
小数部分：乘以2，整数部分为系数

如 十进制 125.5 则二进制表示为  1111101.1

二进制的科学计数为： 1.111011X2^6

float 在内存中int 4字节，32位

31         30---23  22---0
 S              E            M
符号位    阶码         尾数

浮点数的表示方式为：  R= S*M*2^e

e=E-127  由于E的范围是0~256，所以阶码要减去127这样，范围在-127~127.
e为正数  代表浮点数向左移动了e位  
  为负数 则代表浮点数向右移动了e 位

对于上面的表示方式则为：
S=0
E=127+6=133 = 10000101
M 1111011

0 10000101 111101100~~00
*
*
2,
(int &)a equal *(int *)(&a)
*/


#include <iostream>
#include <stdio.h>
#include <string.h>
//#include <conio.h>
using namespace std;

int main()
{
	float a = 1.0f;
	cout << (int)a << endl;
	cout << &a << endl;
	cout << (int&)a << endl;	
	cout << boolalpha << ( (int)a == (int&)a ) << endl;

	float b = 0.0f;
	cout << (int)b << endl;
	cout << &b << endl;
	cout << (int&)b << endl;	
	cout << boolalpha << ( (int)b == (int&)b ) << endl;

	return 0;

}
