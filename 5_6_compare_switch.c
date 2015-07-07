/*
*有两个变量a和b， 不用 “if”、 “?:”、
“switch”或其他判断语句， 找出两个数中间比较大的
*
*/


#include <stdio.h>

int max(int x, int y)
{
	int temp = ((x+y)+abs(x-y))/2;
	return temp;
}

void max1(int x,int y)
{
	int c = x - y;
	char *strs[2] = {"a Large","b Large"};

	c = (unsigned int)c>>(sizeof(int)*8-1);
	printf("max = %s\n",strs[c]);

}


int main()
{
	int a = 8, b = 2;

//	printf("max = %d\n",max(a,b));
	max1(a,b);
	return 0;
}
