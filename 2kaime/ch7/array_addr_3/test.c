#include<stdio.h>

int main()
{
	double double_array[2] = {0.1, 0.2};
	double *ptr;

	ptr = double_array;

	printf("*ptr is %f\n", *ptr);
	printf("double_array[0] is %f\n", double_array[0]);

	ptr++;
	printf("*ptr is %f\n", *ptr);
	printf("double_array[1] is %f\n", double_array[1]);

	return 0;

}
