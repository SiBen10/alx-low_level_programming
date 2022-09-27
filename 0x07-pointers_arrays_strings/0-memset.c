#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Array to be filled
 * @ben: Constant to be filled with
 * @n: Bytes of memory to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char ben, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = ben;
	}

	return (s);
}
