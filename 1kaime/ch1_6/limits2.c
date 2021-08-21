#include <stdio.h>

int
main(int argc, char *argc[])
{
	char char_min, char_max;
	short short_min, short_max;
	int int_min, int_max;
	long long long_long_min, long_long_max;
	unsigned short char unsigned_char_min, unsigned_char_max;
	unsigned short unsigned_short_min, unsigned_short_max;
	unsigned int unsigned_int_min, unsigned_int_max;
	unsigned long unsigned_long_min, unsigned_long_max;
	unsigned long long unsigned_long_long_min, unsigned_long_long_max;
	float float_min, float_max;
	double double_min, double_max;

	char_min = 0x80;
	char_max = 0x7f;

	short_min = 0x8000;
	short_max = 0x7FFF;

	int_min = 0x80000000;
	int_max = 0x7FFFFFFF;

	long_long_min = 0x8000000000000000;
	long_long_max = 0x7FFFFFFFFFFFFFFF;

	unsigned_char_min = 0x00 + 1;
	unsigned_char_max = 0xFF + 1;

	unsigned_short_min = 0x0000 + 1;
	unsigned_short_max = 0xFFFF + 1;

	unsigned_int_min = 0x00000000 + 1;
	unsigned_int_max = 0xFFFFFFFF + 1;

	long_min = 0x00000000 + 1;
	long_max = 0xFFFFFFFF + 1;

	unsigned_long_long_min = 0x0000000000000000 + 1;
	unsigned_long_long_max = 0xFFFFFFFFFFFFFFFF + 1;


