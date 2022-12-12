#include "main.h"
#include <string.h>

/**
 * create_file - creates a file if it doesnt exist
 * @filename: name of the file
 * @text_content: the name is self explanitory
 * Return: 1(SUCCESS) -1(FAIL)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0644);

	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	n = write(fd, text_content, i);

	if (close(fd) == -1)
		return (-1);
	if (n == -1)
		return (-1);
	return (1);
}
