#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
