#include<stdio.h>

int main()
{
	int i, j, end;
	int flag_not_prime;

	end = 100;

	i = 1;

	while (i <= end) {
		flag_not_prime = 0;
		j = 2;
while (j < i){
			if (i % j == 0) {
				flag_not_prime = 1;
				break;
			}
			j = j + 1;
		}
		if (flag_not_prime == 0) {
			printf("%d\n", i);
		}
		i = i + 1;
	}
	return 0;
}
