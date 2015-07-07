#include <stdio.h>

int main(int *argc, char **argv)
{
	int arr[] = {6,7,8,9,10};
	int *ptr = arr;
	int temp = 0;

//	*(ptr++)+=123;
	temp= *(ptr++);	
	printf("arr[0] = %d\n",arr[0]);
	printf("temp = %d\n",temp);
	printf("*ptr = %d\n",*ptr);
	printf("%d %d\n",*ptr,*(++ptr));
	return 0;
}
