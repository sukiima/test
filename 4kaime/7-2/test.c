#include <stdio.h>

int main()
{
	double number_1;
	int number_2;
	char character;

	printf("address of number_1 is %p\n", &number_1);
	printf("%p\n", &number_2);
	printf("%p\n", &character);

	number_1 = 0.1;
	number_2 = 1;
	character = 'a';

	printf("number_1 is %f\n", number_1);
	printf("%d\n", number_2);
	printf("%c\n", character);

	printf("%p\n", &number_1);

	return 0;
}

