#include "main.h"
/**
 * rev_string - ooo
 * @s: ooo
 * Return: ooo
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;

	while (s[b])
	{
		b++;
	}
	b--;
	while (a < b)
	{
		char reverse = s[a];
		s[a] = s[b];
		s[b] = reverse;
		a++;
		b--;
	}
}
