#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints alphabets in lower case, and then
 * uppercase, followed by a new line.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
