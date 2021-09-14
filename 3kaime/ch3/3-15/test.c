#include<stdio.h>

int main(){
	int a, b, c;

	int value = (a = 1+2, b = 2+3, c = 3+4);

	printf("%d, %d, %d, %d", a, b, c, value);

	return 0;
}

