#include<stdio.h>

int main(){
	
	int number_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1};
	int answer = 0;
	int *pnumber = number_array;

	while(*pnumber != -1){
		answer += *pnumber;
		pnumber++;
	}

	printf("%d", answer);
	return 0;
}

