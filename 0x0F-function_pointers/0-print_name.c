#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name:name to add
 * @f:pointer to function printed name
 *
 * Return:0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

