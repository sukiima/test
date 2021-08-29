#include <stdio.h>
#include <string.h>

int main(){
	char full_name[256] = "NIPPON Taro";
	char first_name[256] = "Hanako";
	char *ptr;

	ptr = strchr(full_name, ' ');
	ptr++;

	strcpy(ptr, first_name);

	printf("full name = %s\n", full_name);

	return 0;
}
