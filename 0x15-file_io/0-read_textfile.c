#include "main.h"

/**
 * read_textfile - Reads a text file and prints to STDOUT
 * @filename:text file to read
 * @letters:number of letters printed
 *
 * Return:Number of letters printed
 *        0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(fd);
	free(buffer);

	return (nwrite);
}
