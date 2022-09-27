#include "main.h"

/**
 * _strpbrk - Searches a string for anybof a set of bytes
 *
 * @s: String to be searched
 * @accept: String occurence to search in @s
 *
 * Return: A pointer to the byte in @s that matches one of
 * the bytes in @accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int ben, ben1;

	for (ben = 0; s[ben] != '\0'; ben++)
	{
		for (ben1 = 0; accept[ben1] != '\0'; ben1++)
		{
			if (s[ben] == accept[ben1])
			{
				return (s + ben);
			}
		}
	}

	return ('\0');
}
