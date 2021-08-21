#include<stdio.h>

int main()
{
	char one_string[16];

	printf("input> ");

	fgets(one_string, 16, stdin);

	printf("Your input is %s", one_string);

	return 0;
}
