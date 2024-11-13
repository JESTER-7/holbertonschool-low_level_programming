#include "main.h"
/**
 * create_array - create array and set it with  a specific char
 * @size: the size of the array
 * @c: the specific char
 * Return: Array of c
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int a;

    if (size == 0)
        return (NULL);
    array = malloc(sizeof(char) * size);
    if (array == NULL)
        return (NULL);
    for (a = 0; a < size; a++)
    {
        array[a] = c;
    }
    return (array);
}