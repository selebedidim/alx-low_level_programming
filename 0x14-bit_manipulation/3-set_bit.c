#include "main.h"

/**
 * set_bit - Set a bit at a given index
 * @n:Pointer to the number to change
 * @index:Index of the bit to set to 1
 *
 * Return:1 (success)
 *        0 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
