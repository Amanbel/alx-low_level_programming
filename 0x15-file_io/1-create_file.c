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
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND | O_CREATE, 0644);

	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content != NULL)
	{
		write(fd, text_content, i);
	}
	else
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
