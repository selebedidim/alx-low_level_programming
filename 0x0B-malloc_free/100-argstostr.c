#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program into a string
 *             arguments are separated by a new line in the string.
 * @ac:number of arguments passed to the program
 * @av:an array of pointers to the arguments
 *
 * Return: if  ac == 0; av == null
 *         or function fails - null
 *         otherwise - a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, mee, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
		}
		str = malloc(sizeof(char) * size + 1);

		if (str == NULL)
			return (NULL);
		mee = 0;

		for (arg = 0; arg < ac; arg++)
		{
			for (byte = 0; av[arg][byte]; byte++)
				str[mee++] = av[arg][byte];
			str[mee++] = '\0';
		}
		str[size] = '\0';
	return (str);
}
