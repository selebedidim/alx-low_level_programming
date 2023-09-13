#include "function_pointers.h"

/**
 * int_index - search for an integer in a array
 * @array:array of integers
 * @size:size of element in the array
 * @cmp:pointer to function to be used to compare the values
 *
 * Return:if no element that match size <= 0 return -1
 *        otherwise 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
