#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all possible different
 * combinations of three digits.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int d1, d2, d3;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = '1'; d2 <= '9'; d2++)
		{
			for (d3 = '2'; d3 <= '9'; d3++)
			{
				if (d2 > d1 && d3 > d2)
				{
					putchar(d1);
					putchar(d2);
					putchar(d3);

					if (d1 != 55 || d2 != 56 || d3 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
