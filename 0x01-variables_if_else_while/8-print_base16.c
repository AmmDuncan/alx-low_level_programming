#include <stdio.h>

/**
 * main - main block
 * Return: 0
*/
int main(void)
{
	char i;

	for (i = 0; i <= 16; i++)
	{
		putchar(i % 0x16 + '0');
	}
	putchar('\n');
	return (0);
}
