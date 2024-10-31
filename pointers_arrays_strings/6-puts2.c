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

	while(str[b])
		b++;
	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
