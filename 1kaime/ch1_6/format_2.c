#include<stdio.h>

int main()
{
	int return_val;

	return_val = printf("hello, world\n");
	printf("return_val is %d\n", return_val);

	printf("return_val is %d\n", printf("hello, world\n"));

	return 0;
}




