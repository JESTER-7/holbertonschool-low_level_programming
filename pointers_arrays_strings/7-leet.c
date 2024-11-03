#include "main.h"

/**
 * leet - ooo
 * @s: ooo
 * Return: ooo
 */
char *leet(char *s)
{
	char numbers[] = "4307143071";
	char letters[] = "aeotlAEOTL";
	int a; 
	int b;
	
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == letters[b])
			{
				s[a] = numbers[b / 2];
				break;
			}
		}
	}
	return (s);
}
