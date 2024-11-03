#include "main.h"
/**
 * reverse_array - ooo
 * @a: ooo
 * @n: ooo
 * Return: ooo
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c = n - 1;

	while (b < c)
	{
		int echange = a[b];

		a[b] = a[c];
		a[c] = echange;
		b++;
		c--;
	}
}
