/*
*
等号左边不能是表达式。只能是变量，否则编译报错 
if add the () in SUB, then , it can succeed
*
*/
#include <stdio.h>

//#define SUB(x,y) x-y
#define SUB(x,y) (x-y)
#define ACCESS_BEFORE(element,offset,value) *SUB(&element,offset) =value

int main(int *argc,char **argv)
{
	int i;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	ACCESS_BEFORE(array[5],4,6);
	for (i = 0;i < 10; ++i){
		printf("%d\n",array[i]);
	}
	return 0;
}
