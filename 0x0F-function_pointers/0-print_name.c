#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name  - print_name with given function
 * @name: name of persion
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
