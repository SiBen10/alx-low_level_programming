#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: String to search for character @c in
 * @ben: Character to locate in the string @s
 *
 * Return: First occurence of c or NULL if not found
 */
char *_strchr(char *s, char ben)
{
	unsigned int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == ben)
			return (s + x);
	}

	return ('\0');
}
