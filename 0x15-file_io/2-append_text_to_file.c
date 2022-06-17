#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to file.
 *
 * @filename: name of file to append.
 * @text_content: text of content to append on file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		wr = write(fd, text_content, length);
	}

	if (wr < 0)
		return (-1);

	close(fd);
	return (1);
}
