#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to six times.
 * You are not allowed to use any variable of type `int`.
 * Return: 0
 */
int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 0; num_1 < 8; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 < 9; num_2++)
		{
			for (num_3 = num_2 + 1; num_3 < 10; num_3++)
			{
				putchar((num_1 % 10) + '0');
				putchar((num_2 % 10) + '0');
				putchar((num_3 % 10) + '0');

				if (num_1 == 7 && num_2 == 8 && num_3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
