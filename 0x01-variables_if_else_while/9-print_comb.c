#include <stdio.h>
/**
 * main - Prints all the  combinations of single digit numbers
 *
 * Description - main
 *
 * Return : always 0
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);

		if (num <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
