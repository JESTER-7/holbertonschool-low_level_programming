#include "function_pointers.h"
/**
 * 
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    long unsigned int a;

    for (a = 0; a < size; a++)
        action(array[a]);
}