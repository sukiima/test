#include<stdio.h>

int main(){
	int i, j;
	int tuple[4][5] = {{0}};

	tuple[2][3] = 1;

	for(i = 0;i < 4; i++){
		for(j = 0;j < 5; j++){
			printf("%d ", tuple[i][j]);
		}
		printf("\n");
	}
	return 0;
}
