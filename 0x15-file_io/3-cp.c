#include "main.h"

void close_it(int arg);

/**
 * main - Entry Point
 * Description: copies text from one file to another
 * @ac: count of files
 * @av: input files
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd1, fd2, wr_chk;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDWR);
	fd2 = open(av[2], O_WRONLY | O_TRUNC);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd2 == -1)
		fd2 = open(av[2], O_WRONLY | O_CREAT, 0644);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((wr_chk = read(fd1, buff, sizeof(buff))) > 0)
	{
		if (wr_chk == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close_it(fd1);
			close_it(fd2);
			exit(98);
		}
		if (write(fd2, buff, wr_chk) != wr_chk)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close_it(fd1);
	close_it(fd2);
	return (0);
}

/**
 * close_it - deallocates file discriptor
 * @arg: pointer to fd
 * Return: nothing
 */

void close_it(int arg)
{
	if (close(arg) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arg);
		exit(100);
	}
}
