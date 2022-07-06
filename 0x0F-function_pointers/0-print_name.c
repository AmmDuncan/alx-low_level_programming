#include <stdio.h>

/**
 * print_name  - print_name with given function
 * @name: name of persion
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

