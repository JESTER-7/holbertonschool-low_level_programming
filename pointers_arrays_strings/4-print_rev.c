#include "main.h"
/**
 * print_rev - ooo
 * @s: ooo
 * Return: ooo
 */
void print_rev(char *s)
{
	int a;
	int b = 0;

	while (s[b])
	{
		b++;
	}
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
