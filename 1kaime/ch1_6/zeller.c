#include<stdio.h>

int main()
//main(int argc, char *argv[])
{
	int year;
	int month;
	int day;
	int week_of_day;

	year = 1990;
	month = 8;
	day = 15;

	week_of_day = (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day)% 7;

	printf("%d/%d/%d is %d\n", year, month, day, week_of_day);
	
	return 0;
}
