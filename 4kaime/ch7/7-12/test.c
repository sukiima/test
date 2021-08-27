#include <stdio.h>

int main()
{
	char string_1[16] = "hello, world";
	char string_2[16] = "";
	char *src, *dst;

	src = string_1;//ポインタの初期化
	dst = string_2;

	printf("string_2 is %s\n", string_2);
//	printf("%c", *src);
	
	while(*src != '\0'){
	//	printf("(%c %c)\n", *src, *dst);
		(*dst++) = (*src++);
		
		printf("(%c %c)\n", *src, *dst);
		printf("string_2 is %s\n", string_2);
	}
	printf("string_2 is %s\n", string_2);

	return 0;
}

	

