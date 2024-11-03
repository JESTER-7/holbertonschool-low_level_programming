#include "main.h"
/**
 * _strcmp - ooo
 * @s1: ooo
 * @s2: ooo
 * Return: ooo
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (s1[a] - s2[a]);
}
