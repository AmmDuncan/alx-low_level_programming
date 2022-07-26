#include "main.h"

/**
 * create_file - create file
 * with specified name and content
 * @filename: name to give file being created
 * @text_content: text to write into file
 * Return: number representing status of operation
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len += 1;

		write(fd, text_content, len);
	}

	close(fd);
	return (1);
}
