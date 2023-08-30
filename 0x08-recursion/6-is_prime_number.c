#include "main.h"
int prime_a(int a, int b);

/**
 * prime_a - check if its a prime number
 * @a:input
 * @b:divisor
 *
 * Return: 1 if number is prime
 *         0 if not a prime number
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - detect if it is a prime  number
 * @n:input number
 *
 * Return:0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
