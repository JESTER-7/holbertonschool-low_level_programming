#include "main.h"
/**
 * str_concat - concatenate 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the final string omg
 */
char *str_concat(char *s1, char *s2)
{
    char *final_string;
    int a = 0;
    int b = 0;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    final_string = malloc(sizeof(char) * (s1 + s2));
    if (final_string == NULL)
        return (NULL);
    while (s1[a] != '\0')
    {
        while (s2[b] != '\0')
        {
            final_string[a] = s1[a];
            final_string[b] = s2[b];
        }
    }
    return (a + b);
}