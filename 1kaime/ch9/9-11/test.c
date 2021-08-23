#include<stdio.h>
#include<string.h>

int main()
{
	char *database[2] = {
		"Hokkaido", "Aomori Prifecture"};

	int i, cnt;

	cnt = 0;
	for(i = 0;i < 2; i++){
		if (strstr(database[i], "Prifecture") != NULL){
			printf("%s\n", database[i]);
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}

