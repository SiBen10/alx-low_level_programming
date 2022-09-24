#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int ben, job, tmp;

	job = n - 1;

	for (ben = 0; ben < n / 2; ben++)
	{
		tmp = a[ben];
		a[ben] = a[job];
		a[job--] = tmp;
	}
}
