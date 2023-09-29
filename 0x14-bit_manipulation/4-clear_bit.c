#include "main.h"

/**
 * clear_bit - Sets the value of a given bit
 * @n:Pointer to the number to change
 * @index:Index of the bit to be cleared
 *
 * Return:1(success)
 *        0 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
