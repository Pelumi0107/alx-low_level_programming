#include "main.h"

/**
 * reverse_array - reverses the content of an arrays of integers
 * @a: arrays of intergers to be reversed
 * @n: numbers of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - indx];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
