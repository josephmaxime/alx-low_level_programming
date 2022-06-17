#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: name of file where we read.
 * @letters: the number of letters it should read and print.
 *
 * Return: number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_let_rd, num_let_wr;
	char *str;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	str = malloc(sizeof(char) * (letters + 1));
	if (str == NULL)
		return (0);

	num_let_rd = read(fd, str, letters);
	if (num_let_rd < 0)
		return (0);

	str[letters] = '\0';

	num_let_wr = write(STDOUT_FILENO, str, num_let_rd);
	if (num_let_wr < 0)
		return (0);

	close(fd);
	free(str);
	return (num_let_wr);

}
