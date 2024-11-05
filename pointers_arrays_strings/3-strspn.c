#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: list
 * Return: 
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; a < *s; a++)
	{
		for (b = 0; b < *accept; b++)
		{
			if (accept[b] == s[a])
			{
				c++;
				break;
			}
		}
		if (accept[b] == '\0')
			return (c);
	}
	return (0);
}
