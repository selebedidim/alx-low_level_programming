#include "main.h"

/**
 * print_line - Print a straight line
 * @n: The number of times
 * Return:0
 */

void print_line(int n)
{	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
