#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: list
 * Return: 
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a] != '\0')
	{
		while (accept[b] != '\0' && accept[b] != s[a])
		{
			b++;
		}
		a++;
		if (accept[b] == '\0')
		{
			return (c);
		}
		else
		{
			c++;
		}
		b = 0;
	}
	return (c);
}
