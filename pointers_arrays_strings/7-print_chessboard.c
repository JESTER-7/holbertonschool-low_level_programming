#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a: the array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	while (b < 8)
	{
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}
		c = 0;
		b++;
		_putchar('\n');
	}
}

