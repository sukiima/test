#include<stdio.h>

void
func(void)
{
	int count = 0;

	count = count + 1;

	printf("count = %d\n", count);
	return;
}
int main()
{
	func();
	func();
	func();

	return 0;
}
