#include "main.h"

/**
 * _isalpha - Checkes for alphabetic character
 * @c: The character to be checked.
 *
 * Return: 1 if the character letter is lowercase or uppercase or  0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
