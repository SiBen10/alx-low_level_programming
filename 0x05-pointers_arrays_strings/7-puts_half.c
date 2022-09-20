#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int ben, n, i;

	ben = 0;

	while (str[ben] != '\0')
	{
		ben++;
	}

	if (ben % 2 == 0)
	{
		for (i = ben / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (ben % 2)
	{
		for (n = (ben - 1) / 2; n < ben - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
