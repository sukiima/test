#include<stdio.h>
#include<string.h>

int main(){
	char database[] = ""

	char *p1, *p2;
	char *token;

	p1 = database;

	do{
	p2 = strchr(p1, '\n');
	if(p2 = NULL) {
		p2 = &database[strlen(database) - 1];
	} else {
		*p2 = '\0';
	}
	printf("%s\n", p1);

	token = strtok(p1, ",");
	printf("code = %s\n", token);

	token = strtok(NULL, ",");
	printf("addr2 = %s\n", token);

	token = strtok(NULL, ",");
	printf("addr1 = %s\n", token);

	token = strtok(NULL, ",");
	printf("prefecture = %s\n", token);

	printf("\n");
	p1 = p2  +1;
	}while(*p1 != '\0');
	return 0;

	}
