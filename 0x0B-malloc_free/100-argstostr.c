#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac:int input
 * @av:double pointer array
 *
 * Return:0
 */
char *argstostr(int ac, char **av)
{
	int i, b;
	int c = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str[c] = av[i][b];
		b++;
	}
		if (str[c] == '\0')
	{
		str[c++] = '\n';
	}
		return (str);
}
