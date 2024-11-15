#include "main.h"
/**
 * alloc_grid - return a pointer to a 2dimensional arrays of int
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
    int **array;
    int a, b;

    if (width <= 0 || height <= 0)
        return (NULL);
    /* Allocate memory for the array of row pointers */
    array = malloc(sizeof(int *) * height);
    if (array == NULL)
        return (NULL);

    /* Allocate memory for each row and initialize elements to 0 */
    for (a = 0; a < height; a++)
    {
        array[a] = malloc(sizeof(int) * width);
        if (array[a] == NULL)
        {
            /* Free previously allocated rows on failure */
            for (b = 0; b < a; b++)
                free(array[b]);
            free(array);
            return (NULL);
        }
        /* Initialize elements of the row to 0 */
        for (b = 0; b < width; b++)
            array[a][b] = 0;
    }
    return (array);
}