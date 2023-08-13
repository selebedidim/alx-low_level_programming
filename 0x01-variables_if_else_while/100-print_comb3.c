#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to five times.
 * You are not allowed to use any variable of type `int`.
 * Return: 0
 */
int  main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar('\n');
	return (0);
}
