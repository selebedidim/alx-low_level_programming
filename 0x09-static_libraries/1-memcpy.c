#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: where to copy the memory to
 * @n:the number of bytes
 * @src:the memory area to copy from
 *
 * Return:pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
