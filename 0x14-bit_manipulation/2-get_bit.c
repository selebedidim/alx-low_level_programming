#include "main.h"

/**
 * get_bit - Returns value of a bit at an index
 * @n:Number to look for
 * @index:index of bit
 *
 * Return:value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
