#include "main.h"
/**
 * _strpbrk - same as strspn but print letters
 * @s: initial segment
 * @accept: list
 * Return: ooo
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a); /* s point now to the first matching character */
			}
		}
	}
	return (NULL);
}
