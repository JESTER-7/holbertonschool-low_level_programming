#include "main.h"
/**
 * _puts - ooo
 * @str: ooo
 * Return: ooo
 */
void _puts(char *str)
{
	long unsigned int a = 0;

	while(str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
