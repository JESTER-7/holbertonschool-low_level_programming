#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int final_size, a;
    void *p;
    char *char_p;

    if (nmemb == 0 || size == 0)
        return (NULL);
    final_size = nmemb * size;
    p = malloc(final_size);
    if (p == NULL)
        return (NULL);
    char_p = (char *)p;
    for (a = 0; a < final_size; a++)
        char_p[a] = 0;
    return (p);
}