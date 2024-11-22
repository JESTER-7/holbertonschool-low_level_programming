#include "function_pointers.h"
/**
 * int_index - search 98
 * @array: array of element
 * @size: the size of the array
 * @cmp: pointer to function
 * Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
