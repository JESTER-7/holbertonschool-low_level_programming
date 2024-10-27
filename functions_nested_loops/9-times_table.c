#include "main.h"
#include <stdio.h>
/**
 * times_table - ooo
 * Return: 0
 */

void times_table(void)
{
	int c1, c2, p;

	for (c1 = 0; c1 <= 9; c1++)
	{
		_putchar('0');
		for (c2 = 1; c2 <= 9; c2++)
		{
			_putchar(',');
			_putchar(' ');
			p = c1 * c2;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
