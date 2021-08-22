#include<stdio.h>

char *
func(void)
{
	static char one_string[14] = "hello, world\n";
	printf("from func: %s", one_string);
	return 0;
}
int main()
{
	printf("from main : %s", func());
	return 0;
}
