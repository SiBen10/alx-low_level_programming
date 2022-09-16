#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers 0 to 14 followed by
 * a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
			{
				_putchar((col / 10) + '0');
			}
			_putchar((col % 10) + '0');
		}

		_putchar('\n');
	}
}
