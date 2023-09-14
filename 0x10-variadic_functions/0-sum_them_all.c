#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - calculate the sum of it's parameter
 * @n:number of argument passed into function
 *
 * Return:the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
			va_end(ptr);
			return (sum);
}
