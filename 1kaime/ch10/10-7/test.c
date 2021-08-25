#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct tag_my_data {
	char character;
	double number;
};

int main()
{
	struct tag_my_data *my_data_1;
	struct tag_my_data *my_data_2;

	my_data_1 = malloc(sizeof(struct tag_my_data));
	if(my_data_1 == NULL) {
		printf("Memory allocation error!\n");
		return -1;
	}
	memset(my_data_1, -1, sizeof(struct tag_my_data));
	
	my_data_1->character = 'A';
	my_data_1->number = 3.14;

	my_data_2 = malloc(sizeof(struct tag_my_data));
	if(my_data_2 == NULL) {
		printf("Memory allocation error!\n");
		free(my_data_1);
		return -1;
	}
	memset(my_data_2, 1, sizeof(struct tag_my_data));

	my_data_2->character = 'A';
	my_data_2->number = 3.14;

	if(memcmp(my_data_1, my_data_2, sizeof(struct tag_my_data)) == 0) {
		printf("my_data_1 and my_data_2 are the same\n");
	}

	free(my_data_1);
	free(my_data_2);

	return 0;
}
