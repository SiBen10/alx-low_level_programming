#include "main.h"

/**
 * print_triangle - print a triamgle followedbby a new line
 *
 * @size: integer value to be passed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, col, sp;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (sp = size - 1; sp >= row; sp--)
			{
				_putchar(' ');
			}

			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
