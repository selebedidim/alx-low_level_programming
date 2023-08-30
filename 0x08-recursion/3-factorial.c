#include "main.h"

/**
 * factorial - calculate the factorial of the  number
 * @n:number to calculate the factorial
 *
 * Return:if n > 0 factorial of n
 *        if n < 0 - 1 indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
