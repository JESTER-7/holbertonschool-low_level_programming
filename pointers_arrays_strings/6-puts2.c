#include "main.h"
/**
 * puts2 - ooo
 * @str: ooo
 * Return: ooo
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		printf("%c", str[a]);
	}
	printf("\n");
}
