#include "main.h"

void cant_read_file(char *from_file);
void cant_write_to_file(char *to_file);
void cant_close_file(char *file);
void usage_error(void);

/**
 * main - copy content from one file to another
 * @argc: count of arguments from terminal
 * @argv: list of arguments from terminal
 * Return: int
 */
int main(int argc, char **argv)
{
	char *buffer = malloc(sizeof(char) * 1024);
	char *from_file;
	char *to_file;
	int from_fd;
	int to_fd;
	int from_closed;
	int to_closed;
	int r;

	if (argc != 3)
		usage_error();
	from_file = argv[1];
	to_file = argv[2];
	from_fd = open(from_file, O_RDONLY);
	to_fd = open(to_file, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (from_fd == -1)
		cant_read_file(from_file);
	r = read(from_fd, buffer, 1024);
	if (r == -1)
		cant_read_file(from_file);
	if (to_fd == -1)
		cant_write_to_file(to_file);
	while (buffer != NULL)
	{
		write(to_fd, buffer, strlen(buffer));
		if (strlen(buffer) < 1024)
			buffer = NULL;
		else
			read(from_fd, buffer, 1024);
	}
	from_closed = close(from_fd);
	to_closed = close(to_fd);
	if (from_closed == -1)
		cant_close_file(from_file);
	if (to_closed == -1)
		cant_close_file(to_file);
	free(buffer);
	return (0);
}

/**
 * cant_read_file - print cant read file
 * @from_file: name of file
 */
void cant_read_file(char *from_file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
	exit(98);
}

/**
 * cant_write_to_file - print cant read file
 * @to_file: name of file
 */
void cant_write_to_file(char *to_file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
	exit(99);
}

/**
 * cant_close_file - print cant read file
 * @file: name of file
 */
void cant_close_file(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close %s\n", file);
	exit(100);
}

/**
 * usage_error - print usage error
 */
void usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
