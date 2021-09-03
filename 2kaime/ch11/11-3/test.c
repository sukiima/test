#include<stdio.h>

#define FILE_NAME "test.dat"

int main(){
	int i;
	FILE *fp;

	for (i = 1; i < 8192; i++) {
		fp = fopen(FILE_NAME, "r");
		if (fp == NULL) {
			printf("can't open file\n");
			return -1;
		}
		printf("%d file opend.\n", i);
	}
	
	return 0;
}
