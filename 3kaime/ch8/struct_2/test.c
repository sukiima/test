#include<stdio.h>

struct tag_coord{
	double x;
	double y;
};

void print_coordinates(struct tag_coord);

void
print_coordinates(struct tag_coord c)
{
	printf("c.x = %f\n", c.x);
	printf("c.y = %f\n", c.y);

	c.x = 123;
	c.y = 456;
}

int main(){
	struct tag_coord coord;

	coord.x = 1;
	coord.y = 2;

	print_coordinates(coord);

	printf("coord.x = %f\n", coord.x);
	printf("coord.y = %f\n", coord.y);
	
	return 0;
}
