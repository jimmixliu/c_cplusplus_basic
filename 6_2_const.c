/*
*
const 修饰指针：分如下4中情况：

int b = 500;
A:const int* a = &b;
B:int const *a = &b;
C:int* const a = &b;
D:const int* const a = &b

主要看const是位于*的哪一侧？

const 位于*的左侧，则修饰的是指针执行的值不能改变。
因此A,B 是一样的。

const位于*的右侧，则修饰的是指针本身的值，就是指针本身不能改变，
则定义的时候必须要进行初始化。

因此D来说就是本身和指向的值都不能改变。


const 成员函数：

成员函数不改变类的数据成员==不能试图改变成员或调用另一个非const成员函数

需要特别注释的是如果在类里面的数据成员加上mutable后，修饰为const的成员函数，也可以修改
*
*/
#include <stdio.h>

int main(int *artc,char **argv)
{
	int b = 500;

	const int* a = &b;
//	 int const * a = &b;
//	*a = 600; //compile error
	b = 600;
	printf("*a = %d\n",*a);

//	int* const a = &b;
//	a++; //compile error

	
}
