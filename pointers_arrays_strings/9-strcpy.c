#include "main.h"
/**
 * _strcpy - ooo
 * @dest: ooo
 * @src: ooo
 * Return: ooo
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	char *b;

	while (src[a])
		a++;
	b = src;
	src = dest;
	dest = b;
	return (dest);
}
