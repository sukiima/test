#include<stdio.h>

int main()
{
	goto label_1;

	printf("This statement doesn't execute.\n");

label_1:

	return 0;
}
