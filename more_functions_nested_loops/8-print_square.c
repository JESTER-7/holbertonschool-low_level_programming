#include "main.h"
/**
 * print_square - ooo
 * @int: ooo
 * Return: ooo
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		_putchar('\n');
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
