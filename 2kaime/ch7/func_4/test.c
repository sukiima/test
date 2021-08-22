#include<stdio.h>

int *sum(int *, int *);

int *
sum(int *a, int *b){
	int return_value;
	return_value = *a + *b;
	return &return_value;
}

int main()
{
	int number_array[2];
	int *answer;

	number_array[0] = 1;
	*(number_array + 1) = 2;

	answer = sum(number_array, &number_array[1]);
	printf("answer = %d\n", *answer);

	return 0;
}
