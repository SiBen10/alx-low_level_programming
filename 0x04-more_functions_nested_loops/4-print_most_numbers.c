#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9, followed
 * by a new line, except number 2 and 4.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
