#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src:the source string
 * @dest:the destination string
 *
 * Return:pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		      dlen++;

	}
	dest[dlen] = '\0';

	return (dest);
}
