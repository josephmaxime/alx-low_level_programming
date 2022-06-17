#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - create a text file.
 *
 * @filename: name of file at create.
 * @text_content: text of content of file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
		length = 0;
	}
	else
		length = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	wr = write(fd, text_content, length);
	if (wr < 0)
		return (-1);

	close(fd);
	return (1);
}
