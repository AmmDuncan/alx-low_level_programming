#include "main.h"

/**
 * read_textfile - read text file and print to stdout
 * @filename: file name
 * @letters: number of letters to read
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	ssize_t rd;
	char *chunk;
	int file;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	chunk = malloc(sizeof(char) * letters);
	rd = read(file, chunk, letters);
	count = write(1, chunk, rd);

	free(chunk);
	return (count);
}
