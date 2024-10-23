#include <stdio.h>
#include <stdlib.h>
/**
 * main - ooo
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e') 
			putchar(i);
	}
	putchar('\n');
return (0);
}
