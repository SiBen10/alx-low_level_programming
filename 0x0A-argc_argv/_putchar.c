#include <unistd.h>

/**
 * _putchar - writes the character ben to stdout
 * @ben: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char ben)
{
	return (write(1, &ben, 1));
}
