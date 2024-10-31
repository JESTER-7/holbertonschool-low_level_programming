#include "main.h"
/**
 * print_array - ooo
 * @a: ooo
 * @n: ooo
 * Return: ooo
 */
void print_array(int *a, int n)
{
	int i;
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
				printf(", ");
		}
		printf("\n");
}
