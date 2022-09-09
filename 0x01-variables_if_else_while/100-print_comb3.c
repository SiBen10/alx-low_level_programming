#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all possible combinations
 * of two digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 49; digit2 < 58; digit2++)
		{
			if (digit2 > digit1)
			{
				putchar(digit1);
				putchar(digit2);

				if (digit1 != 56 || digit2 != 57)
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}

	putchar('\n');

	return (0);
}
