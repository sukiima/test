#include<stdio.h>

int main(){
	char one_string[16] = "hello, world";
	char two_string[16] = "";
	
	char *one = one_string;
	char *two = two_string;

	while(*one != '\0'){
		*two++ = *one++;
	}
	printf("two = %s", two_string);

	return 0;
}
