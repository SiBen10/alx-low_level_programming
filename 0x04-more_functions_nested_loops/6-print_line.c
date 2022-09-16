#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: integer value
 *
 * Rrturn: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (!(n == 0 || n < 0))
		{
			_putchar('_');
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
