#include<stdio.h>

int main()
{
	int character = 0;

	while(character < 256){
		printf("%c", character);
		character = character + 1;
		if ((character % 16) == 0){
			printf("\n");
		}
		}
		return 0;
	}
