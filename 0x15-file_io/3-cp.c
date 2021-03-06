#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * fd_checker - check if file description is > 0.
 *
 * @fd: value of file description.
 * @file: type of file to check.
 * @type_fd: type of file description.
 */

int fd_checker(int fd, char *file, char type_fd)
{
	int cl;

	if (type_fd == 'r')
	{
		if (fd < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", file);
			exit (98);
		}
	}
	else if (type_fd == 'w')
	{
		if (fd < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", file);
			exit( 99);
		}
	}
	else
	{
		cl = close(fd);
		if (cl == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd);
			exit (100);
		}
	}
	return (1);
}

/**
 * copy - copy file to another file.
 *
 * @file_to: file to copy.
 * @file_from: from file to copy.
 * Return: 1 from success.
 */
int copy( char *file_to, char *file_from)
{
	char *str;
	int fd_w, fd_r, let_r, let_w;

	fd_w = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fd_checker(fd_w, file_to, 'w');

	fd_r = open(file_from, O_RDONLY);
	fd_checker(fd_r, file_from, 'r');

	str = malloc(sizeof(char) * 1024);
	if (str == NULL)
		return (0);

	let_r = read(fd_r, str, 1024);
	fd_checker(let_r, file_from, 'r');
	fd_checker(let_r, "", 'c');

	let_w = write(fd_w, str, 1024);
	fd_checker(let_w, file_to, 'w');
	fd_checker(let_w, "", 'c');

	fd_checker(fd_r, "", 'c');
	fd_checker(fd_w, "", 'c');
	free(str);

	return (1);
}
/**
 * main - Entry code
 *
 * @argc: number of arguments.
 * @argv: list of arguments.
 *
 * Return: 0 for Always success.
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit (97);
	}

	copy(argv[2], argv[1]);
	return (0);
}
