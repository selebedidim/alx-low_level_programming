#include "main.h"

/**
 * print_line - Print a straight line
 * @n: The number of times
 * Return:0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;

		}

		_putchar('\n');

	}
	else
		_putchar('\n');
}
