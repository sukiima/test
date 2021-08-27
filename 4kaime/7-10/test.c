#include<stdio.h>

int main()
{
	int number_array[] = {1, 2, 3, -1};

	int answer;
	int *pnumber;

	pnumber = number_array;
	answer = 0;

	while(*pnumber != -1) {
		answer += *pnumber;
	pnumber++;
}
printf("answer is %d\n", answer);

return 0;
}
