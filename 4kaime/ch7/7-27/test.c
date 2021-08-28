#include <stdio.h>

void func(void);

void func(void) {
	printf("this is func\n");
}

int main()
{
	char one_string[] = "hello, world\n";
	void (*ptr_function) (void);

	ptr_function = (void (*) (void)) one_string;

	ptr_function();
	return 0;
}

