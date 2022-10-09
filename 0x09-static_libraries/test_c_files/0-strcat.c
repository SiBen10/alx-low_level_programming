#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int ben, job;

	ben = 0;
	job = 0;

	while (dest[ben] != '\0')
		ben++;

	while (src[job] != '\0')
	{
		dest[ben] = src[job];
		job++;
		ben++;
	}

	dest[ben] = '\0';

	return (dest);
}
