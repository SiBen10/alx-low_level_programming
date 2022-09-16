#include "main.h"

/**
 * print_square - Prints a square followed by a new line.
 *
 * @size: integer value for the size if the square.
 *
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int row, col;

		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
