#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ben;

	ben = 0;

	while (src[ben] != '\0' && ben < n)
	{
		dest[ben] = src[ben];
		ben++;
	}

	while (ben < n)
	{
		dest[ben] = '\0';
		ben++;
	}

	return (dest);
}
