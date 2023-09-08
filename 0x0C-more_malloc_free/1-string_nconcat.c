#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1:first string
 * @s2:second string
 * @n:amount of bytes
 *
 * Return:pointer to the allocated memory
 *        if function fails status value
 *        is ==98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, conct, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n > len2)
		n = len2;
	conct = len1 + n;
	str = malloc(conct + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < conct; i++)
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len1];
	str[i] = '\0';
	return (str);
}
