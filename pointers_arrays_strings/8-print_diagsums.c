#include "main.h"
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: list
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, diag_1, diag_2;

	diag_1 = 0;
	diag_2 = 0;
	for (i = 0; i < size; i++)
	{
		diag_1 += a[i * (size + 1)];
		diag_2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, ", diag_1);
	printf("%d\n", diag_2);
}
