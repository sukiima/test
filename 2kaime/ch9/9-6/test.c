#include<stdio.h>
#include<string.h>

int main(){
	printf("foo bar = %d\n", strcmp("foo", "bar"));
	printf("bar foo = %d\n", strcmp("bar", "foo"));
	printf("foo foo = %d\n", strcmp("foo", "foo"));

	return 0;
}

