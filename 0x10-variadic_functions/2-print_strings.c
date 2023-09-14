#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings,follewed by a newline
 * @separator:The strings to be printed between strings
 * @n:the number of strings to be passed to the functions
 * @...:A variable number of string to be printed
 *
 * description:if separator is NULL it is not printed
 *             if one of the string if NULL (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int list;

	va_start(strings, n);

	for (list = 0; list < n; list++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (list != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
