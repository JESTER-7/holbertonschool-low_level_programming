#include "main.h"
/**
 * leet - ooo
 * @s: ooo
 * Return: ooo
 */
char *leet(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == 'a' || s[a] == 'A')
			s[a] = '4';
		else if (s[a] == 'e' || s[a] == 'E')
                        s[a] = '3';
		else if (s[a] == 'o' || s[a] == 'O')
                        s[a] = '0';
		else if (s[a] == 't' || s[a] == 'T')
                        s[a] = '7';
		else if (s[a] == 'l' || s[a] == 'L')
                        s[a] = '1';
	}
	return (s);
}
