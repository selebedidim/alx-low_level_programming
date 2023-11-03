#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - buffer allocation of 1024 bytes
 * @file:The name of the file for which  buffer is created for
 *
 * Return:A pointer to the newly buffer allocation
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error:  can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - Closes file descriptor
 * @fd:File descriptor to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file
 * @argc:Number of arguments supplied to the program
 * @argv:An array of pointer to the arguments
 *
 * Description - exit(97) if the argument count is incorrect
 *               exit(98) if file_from doesn't exist or can't be read
 *               exit(99) if file_to can't be created or written
 *               exit(100) if file_to or file_from can't be closed
 * Return:0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_byte, write_byte;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_byte = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_byte == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read file_from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		write_byte = write(file_to, buff, read_byte);

		if (file_to == -1 || write_byte == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		read_byte = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (write_byte > 0);
	free(buff);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
