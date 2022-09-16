#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: A program that finds and prints the largest
 * prime factor of the number
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long int i = 3, num = 612852475143;

	for ( ; i < 12057; i += 2)
	{
		while (num % i == 0 && num != i)
		{
			num /= i;
		}
	}

	printf("%lu\n", num);

	return (0);
}
