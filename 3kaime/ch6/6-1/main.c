#include<stdio.h>
#include "function.h"

int main(){
	int answer;
	int a = 1;
	int b = 2;

	answer = sum(a, b);
	printf("a+b=%d", answer);

	return 0;
}
