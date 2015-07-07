/*
用三个^不用担心越界
*/
#include <stdio.h>

void my_switch(int *x,int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main(int *argc, char **argv)
{
	int a = 9,b = 5;
	my_switch(&a,&b);
	printf("a = %d, b = %d\n",a,b);
	return 0;
}
