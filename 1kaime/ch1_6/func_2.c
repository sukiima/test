
#include<stdio.h>

int sub(int , int);

int 
sub(int a, int b)
{
	a -= b;
	return a;
}
int
main()
{
	int a;
	int answer;

	a = 2;

	printf("before sub() a = %d\n", a);

	answer = sub(a, 1);

	printf("after sub() = %d\n", a);
	printf("answer = %d\n", answer);

	return 0;
}
