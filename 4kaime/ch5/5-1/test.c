#include<stdio.h>

int sum(int, int);

int sum(int a, int b){
	int return_value;

	return_value = a + b;

	return return_value;
}

int main(){
	int i = 1;
	int j = 2;
	int answer = sum(i, j);

	printf("1+2=%d", answer);

	return 0;
}



