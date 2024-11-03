#include "main.h"
/**
 * _strncat - ooo
 * @dest: ooo
 * @src: ooo
 * @n: ooo
 * Return: ooo
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != src[n])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
