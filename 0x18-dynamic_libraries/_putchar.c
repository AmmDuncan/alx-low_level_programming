#include <unistd.h>

/**
 * putchar - print char to std out
 * @c: character to print
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
