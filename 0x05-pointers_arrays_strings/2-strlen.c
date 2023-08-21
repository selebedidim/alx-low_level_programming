#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string evaluate
 *
 * Return: The length of a striniig
 */

int _strlen(char *s)
{
	int total_len;

	total_len = 0;

	while (s[total_len] != '\0')
	{
	total_len++;
	}
	return (total_len);
}
