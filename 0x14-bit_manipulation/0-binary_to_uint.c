#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b:String containing the binary number
 *
 * Return:The Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
	uint = 2 * uint + (b[i] - '0');
	}
	return (uint);
}
