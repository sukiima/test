#include <stdio.h>

int
main(int argc, char *argv[])
{
	char one_string[14];
	char two_string[14] = "hello, world\n";

	one_string[0] = 'h';
	one_string[1] = 'e';
	one_string[2] = 'l';
	one_string[3] = 'l';
	one_string[4] = 'o';
	one_string[5] = ',';
	one_string[6] = ' ';
	one_string[7] = 'w';
	one_string[8] = 'o';
	one_string[9] = 'r';
	one_string[10] = 'l';
	one_string[11] = 'd';
	one_string[12] = '\n';
	//one_string[13] = '\0';

	printf("%s, %s", one_string, two_string);

	return 0;
}
