#include "main.h"

/**
 * print_sign - Print the sign of number
 * @n: The number of which the sign will be printed
 *
 * Return: 1 if the number is greater than zero
 *         -1 if the number is below zero
 *         0 if the number is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
