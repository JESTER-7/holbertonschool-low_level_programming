#include "main.h"
/**
 * _puts - ooo
 * @str: ooo
 * Return: ooo
 */
void _puts(char *str)
{
	long unsigned int a;

	for (a = 0; a < strlen(str); a++)
		_putchar(a[str]);
	_putchar('\n');
}
