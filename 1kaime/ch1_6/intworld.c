#include<stdio.h>

int
main()
{
	int number_array[] = {0x6c6568, 0x77202c6f, 0x646c726f, 0x0000000a};
	printf("%s", (char *) number_array);

	return 0;
}
