#include "main.h"

/**
 * create_file - creates a file if it doesnt exist
 * @filename: name of the file
 * @text_content: the name is self explanitory
 * Return: 1(SUCCESS) -1(FAIL)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREATE | O_RDWR);

	if (fd == -1)
		return (-1);

	close(fd);
	return (0);
}
