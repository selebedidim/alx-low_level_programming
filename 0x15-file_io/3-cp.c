#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void closefile(int fd);

/**
 * create_buffer - buffer allocation of 1024 bytes
 * @file:The name of the file for which  buffer is created for
 *
 * Return:A pointer to the newly buffer allocation
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file decriptor
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
	int fdDest, fdSource, readBytes, writeBytes;
	char buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fdSource = open(argv[1], O_RDONLY);
	readBytes = read(fdSource, (void *)buffer, 1024);
	fdDest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fdSource == -1 || readBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error:Can't read from source file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writeBytes = write(fdDest, (const void *)buffer, readBytes);
		if (fdDest == -1 || writeBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read to destination file %s\n" argv[2]);
			free(buffer);
			exit(99);
	}
	readBytes = read(fdSource, (void *)buffer, 1024);
	fdDest = open(argv[2], O_WRONLY | O_APPEND);
		} while (readBytes > 0);
		free(buffer);
		close_file(fdSource);
		close_file(fdDest);

		return (0);
}
