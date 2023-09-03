#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set bytes
 * @s:string to be searched
 * @accept:set of bytes to be searched for
 * Return:if set is  matched -pointer to the matched byte
 *        if not set is matched null
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
