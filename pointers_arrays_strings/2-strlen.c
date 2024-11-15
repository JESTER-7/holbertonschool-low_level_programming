#include "main.h"
/**
 * _strlen - ooo
 * @s: ooo
 * Return:: ooo
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len] != '\0')
		len++;
	return (len);
}
