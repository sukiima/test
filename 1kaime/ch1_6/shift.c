#include<stdio.h>

int main()
{
	unsigned int n;

	n = 32768;

	printf("one left shift %u\n", n<< 1);
	printf("two left shift %u\n", n<< 2);

	printf("one right shift %u\n", n>> 1);
	printf("two left shift %u\n", n>> 2);

	return 0;

}
