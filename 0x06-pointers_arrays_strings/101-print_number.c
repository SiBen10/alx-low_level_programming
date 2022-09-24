#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int ben;

	if (n < 0)
	{
		ben = -n;
		_putchar('-');
	} else
	{
		ben = n;
	}

	if (ben / 10)
		print_number(ben / 10);

	_putchar((ben % 10) + '0');
}
