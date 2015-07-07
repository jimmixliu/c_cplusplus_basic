/*
* make add and plus by & ^ 
*
*/

#include <stdio.h>

int add(int x,int y)
{
	return y ? add(x^y,(x&y)<<1):x;
}

int negative(int x)
{
	return add(~x,1);
}

int sub(int x,int y)
{
	return add(x,negative(y));
}



int main(int *argc,char **argv)
{
	int a = 0x5,b = 0x3;
	int result = 0;	

	result = add(a,b);
	printf("a+b = %d\n",result);

	printf("a-b = %d\n",sub(a,b));


	return 0;
}
