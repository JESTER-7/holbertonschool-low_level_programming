#include "main.h"
/**
 * _atoi - ooo
 * @s: ooo
 * Return: ooo
 */
int _atoi(char *s)
{
	unsigned int nombre = 0;
	int signe = 1;

	do {
		if (*s == '-')
			signe *= -1;

		else if (*s >= '0' && *s <= '9')
			nombre = (nombre * 10) + (*s - '0');
		/* passe le nombre en entier au lieu du char*/
		else if (nombre > 0)
			/* si c'est autre chose qu'un entier on recommence la boucle*/
			break;

	} while (*s++);

	return (nombre * signe);
}
