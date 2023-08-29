#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack:string to be searched
 * @needle:substring to be located
 *
 * Return:if the substring located
 *        a pointer to the beginning of located string
 *        if substring is not found return null
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);

		}
		haystack++;
	}
	
	return ('\0');
}
