#include "main.h"
/**
 * _strdup - return a pointer to a new string
 * @str: the string who will be duplicated
 * Return: a pointer or null
 */
char *_strdup(char *str)
{
	char *duplicate;
	int a;
	int b = 0;
	
	if (str == NULL)
		return (NULL);
	while (str[b] != '\0')
		b++;
	duplicate = malloc(sizeof(char) * (b + 1)); /* +1 including the null operator */
	if (duplicate == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
		duplicate[a] = str[a]; /* copy str to duplicate */
	duplicate[b] = '\0'; /* mark the end of duplicate[b] */
	return (duplicate);
}
