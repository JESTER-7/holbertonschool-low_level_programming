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
	for (a = 0; a < size; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (b <= size - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
