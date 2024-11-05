#include "main.h"
/**
 * _memcpy - copy memory area from src to dest
 * @dest: the destination of the copy
 * @src: the area copied
 * @n: the number of bytes copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}

