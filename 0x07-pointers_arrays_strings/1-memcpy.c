#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @src: Memory area to copy from
 * @dest: Memory area to copy to
 * @n: Number of bytes to copy from @src
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ben;

	for (ben = 0; ben < n; ben++)
	{
		dest[ben] = src[ben];
	}

	return (dest);
}
