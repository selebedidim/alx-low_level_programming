#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename:A pointer to the name of the file
 * @text_content:The string to be added at the end of the file
 *
 * Return:if filename is NULL -1
 *        if text_content is NULL 1
 *        if the file does not exist the or if you do not
 *        have the required permissions -1
 *        otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nopen, nwrite, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	nopen = open(filename, O_WRONLY | O_APPEND);
	nwrite = write(nopen, text_content, len);

	if (nopen == -1 || nwrite == -1)
		return (-1);
	close(nopen);

	return (1);
}
