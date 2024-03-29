#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack:string to be searched
 * @needle:substring to be located
 * Return:if the string is located
 *        pointer to the beginning of the located string
 *        if the string not located return 0
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index]  == needle[index])
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
