#include<stdio.h>

int main()
{
	double number_1;
	int number_2;
	char character;

	double *pnumber_1;
	int *pnumber_2;
	char *pcharacter;

	printf("%p\n%p\n%p\n", &number_1, &number_2, &character);

	pnumber_1 = &number_1;
	pnumber_2 = &number_2;
	pcharacter = &character;

	printf("%p\n%p\n%p\n", pnumber_1, pnumber_2, pcharacter);

	number_1 = 0.1;
	number_2 = 1;
	character = 'a';

	printf("%f\n%d\n%c\n", number_1, number_2, character);

	printf("%p\n%p\n%p\n", &number_1, &number_2, &character);

	printf("%p\n%p\n%p\n", pnumber_1, pnumber_2, pcharacter);

	return 0;
}
	
