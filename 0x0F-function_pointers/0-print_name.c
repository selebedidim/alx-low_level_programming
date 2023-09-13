#include "function_pointers.h"

/**
 * print_name - print name using a pointer to function
 * @name:name to be printed
 * @f:pointer to a function that printed name
 *
 * Return:0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
