#include "main.h"

/**
 * flip_bits - Counts the number of bits you will need to
 *             flip from one to another
 * @n:The first number
 * @m:The second number
 *
 * Return:Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n^m;


	for (i = 63; i >= 0; i--)
	{
		curr = exclusive >> i;
		if (curr & 1)
			count++;
	}
	return (count);
}
