#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of the program
 * @a:address of the main function
 * @n:number of bytes to print
 *
 * Return:0
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - print the opcodes of its own main funtion
 * @argc:argument count
 * @argv:argument vector
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
		return (0);
}
