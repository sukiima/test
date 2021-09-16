#include<stdio.h>

int main(){
	int number_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1};
	int answer;
	int i;

	for(i = 0, answer = 0;number_array[i] != -1;i++){
		answer += number_array[i];
	}

	printf("%d", answer);

	return 0;
}

