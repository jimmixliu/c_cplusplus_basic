#include <stdio.h>

int main(int *argc,char **argv)
{
	int n = 'c';
	
	switch(n++){
		case 'a':
		case 'A':
		case 'b':
		case 'B':
			printf("ab\n");
		break;
		case 'c':
		case 'C':
			printf("c\n");
		case 'd':
		case 'D':
			printf("d\n");
	}

	return 0;
}
