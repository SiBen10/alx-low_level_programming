#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)

	int x;
	int y;
	int z;

	x = 4;
	y = 01;
	z = 1997;

	printf("Date: %02d/%02d/%04d\n", x, y, z);

	dd = convert_day(x, z);

	print_remaining_days(x, y, z);

	return (0);
}
