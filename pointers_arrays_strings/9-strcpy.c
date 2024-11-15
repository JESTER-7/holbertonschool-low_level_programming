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

	while (src && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
