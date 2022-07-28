#include "main.h"

/**
 * append_text_to_file - write to end of a file
 * @filename: name of file to append to
 * @text_content: text to write to file
 * Return: integer representing status of action
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);
	return (1);
}
