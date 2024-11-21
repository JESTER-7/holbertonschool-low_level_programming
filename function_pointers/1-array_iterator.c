#include "function_pointers.h"
/**
 * array_iterator - fill an array
 * @array: the array to fill
 * @size: the size of the array
 * @action: the function we need to use to fill the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
