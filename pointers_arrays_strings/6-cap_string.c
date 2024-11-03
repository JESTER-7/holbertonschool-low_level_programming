#include "main.h"
/**
 * cap_string - ooo
 * @str: ooo
 * Return: ooo
 */
char *cap_string(char *str)
{
	int a = 0;

	if (str[a] >= 'a' && str[a] <= 'z')
	{
		str[a] -= 32;
	}
	char separators[] = " \t\n,;.!?\"(){}";
	
	for (a = 1; str[a] != '\0'; a++)
	{
		int b;

		for (b = 0; separators[b] != '\0'; b++)
		{
			if (str[a - 1] == separators[b])
			{
				if (str[a] >= 'a' && str[a] <= 'z')
				{
					str[a] -= 32;
				}
				break;
			}
		}
	}
	return (str);
}
