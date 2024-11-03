#include "main.h"
/**
 * string_toupper - ooo
 * @str: ooo
 * Return: ooo
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			/* a -32 dans la table ascii = A */
			str[a] -= 32;
		a++;
	}
	return (str);
}
