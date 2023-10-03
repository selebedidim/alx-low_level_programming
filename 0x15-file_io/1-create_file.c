#include "main.h"

/**
 * create_file - create a file
 * @text_content:pointer to the name of the file
 * @filename:pointer to a string to write
 * Return:success(1)
 *        if fail (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		if (fd == -1)
			return (-1);
		if (!text_content)
		text_content = " ";
		for (nletters = 0; text_content[nletters]; nletters++)
		;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
		return (-1);
		close(fd);

		return (1);
}
