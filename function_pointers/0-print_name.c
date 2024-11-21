#include "function_pointers.h"
/**
 * print_name - print the name of the guy
 * @name: his name
 * @f: the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
