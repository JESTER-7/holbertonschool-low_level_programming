#include "main.h"
/**
 * print_triangle - ooo
 * @size: ooo
 * Return: ooo
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b <= size - a)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
