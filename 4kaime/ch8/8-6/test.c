#include<stdio.h>

struct tag_coord {
	double x;
	double y;
};

int main() {
	double num;
	double num_array[4];
	struct tag_coord coord;
	struct tag_coord coord_array[4];

	printf("size of num is %zu\n", sizeof num);
	printf("size of num_array is %zu\n", sizeof num_array);
	printf("size of coord is %zu\n", sizeof coord);
	printf("size of coord_array is %zu\n", sizeof coord_array);

	return 0;
}

