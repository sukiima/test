#include<stdio.h>

int main()
{
	char *one_string = "hello, world\n";
	one_string[0] = 'H';
	printf("%s", one_string);
	return 0;
}

