#include <stdio.h>
#define ma 12

int create_tuple(int tuple[][ma]){
	int i, j;
	if (tuple == NULL){
		return -1;
	}

	for (i = 0;i < ma;i++) {
		for (j = 0;j < ma;j++) {
			tuple[i][j] = (i + 1) * (j + 1);
		}
	}
	return 0;
}
int main()
{
	int i, j;
	int tuple[ma][ma] = {{0}};

	create_tuple(tuple);

	for(i = 0; i< ma;i++) {
		for(j = 0; j < ma;j++) {
			printf("% 4d ", tuple[i][j]);
		}
		printf("\n");
	}
	return 0;
}


