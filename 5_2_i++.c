/*
* 运算符优先级
* !x++
*/

#include<stdio.h>

int main(int *argc,char **argv)
{
	int i,x;
        for (i = 0,x = 0;i <=1 && !x++;i++){
//	for (i = 0,x = 0;i <=1 && !x++;){
		i++;
		printf("every step i = %d, x = %d\n",i,x);
	}
	printf("final i = %d, x = %d\n",i,x);
	return 0;
}
