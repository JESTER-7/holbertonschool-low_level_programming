#include "main.h"
/**
 * print_last_digit - ooo
 * @r: ooo
 * Return: 0
 */
int print_last_digit(int r)
{
	int i  = r % 10;
	{
		if (i < 0)
		{
			i = -i;
		}
		_putchar('0' + i);
	}
	return (i);
}
