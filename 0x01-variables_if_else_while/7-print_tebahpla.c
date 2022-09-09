#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char hex_num, hex_alp;

	for (hex_num = 48; hex_num < 58; hex_num++)
	{
		putchar(hex_num);
	}
	for (hex_alp = 97; hex_alp <= 102; hex_alp++)
	{
		putchar(hex_alp);
	}

	putchar('\n');

	return (0);
}
