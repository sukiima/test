#include<stdio.h>

int main(){
	int answer = 0;
	int cnt = 0;

	while (cnt <= 10) {
		answer = answer + cnt;
		cnt++;
	}
	printf("answer = %d\n", answer);

	return 0;

}
