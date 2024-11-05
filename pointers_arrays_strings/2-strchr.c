#include "main.h"
/**
 * _strchr - locate a char
 * @s: the string where is the char to locate
 * @c: the char
 * Return: a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	char *a = 0;
	int b;

	for (b = 0; b < *s; b++)
	{
		if (s[b] == c)
		{
			a = &s[b];
			return (a);
		}
	}
	return (NULL);
}
