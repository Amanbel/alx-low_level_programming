#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of the file
 * @text_content: content to append
 * Return: 1(success) -1(fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, i = 0;

	if (filename == NULL && text_content == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	n = write(fd, text_content, n);

	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
