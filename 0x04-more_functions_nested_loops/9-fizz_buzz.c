#include "main.h"

/**
 * main - check the code
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			prinf("fizzBuzz");
		else if (i % 3 == 0)
			printf("fuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100 )
			printf(" ");
	}
	printf('\n');

	return (0);
}
