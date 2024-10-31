#include "main.h"
/**
 * puts2 - ooo
 * @str: ooo
 * Return: ooo
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b])
		b++;
	for (a = 0; a < b; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
