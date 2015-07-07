/*
*int 强制转换为char 会发生字节的截断（高3位字节就会自动舍弃）

对于int 类型的指针强制转换为char型的指针，则影响的是偏移量。
比如说int *a ，  a+1 则表示的是移动4个字节。如果char *p = (char *)a; p+1 ,则表示移动的是一个字节。
*
但是对*p的结果也是会产生截断的。


还需要注意的是如果是unsigned char 转化为char 类型的时候，使用printf 打印的时候如果是负数，则会打印将高位全部置为ff


*/
#include <stdio.h>

int main()
{
	unsigned int a = 0x12345678;
	//unsigned int a = 0xfffffff8;
	unsigned char i = (unsigned char)a;
	char *b = (char*)&a;

//	b = b+1;
//	*b = 3;

	printf("%x,%x,%x,%x\n",i,*b);
}

