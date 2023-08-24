#include "main.h"

/**
 * reverse_array - reverses the content of a array of integer
 * @a: array of integer to be reversed
 * @n:number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
