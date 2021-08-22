#include<stdio.h>

int main()
{
	const char character = 'A';
	const int number = 1;
	
	printf("character is = %c\n", character);
	printf("number is %d\n", number);

	character = 'B';
	number = 2;

	return 0;
}
