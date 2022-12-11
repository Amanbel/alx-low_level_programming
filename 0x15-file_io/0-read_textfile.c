#include"main.h"
#include<string.h>

/**
 * read_textfile - outputs text to stdout
 * @filename: file with text
 * @letters: n number of bytes to be outputed
 * Return: bytes of output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);

	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);

	if (rd == -1)
		return (0);
	buff[letters] = '\0';}

	wr = write(1, buff, rd);

	if (wr == -1)
		return (0);

	close(fd);
	free(buff);
	return (wr);
}
