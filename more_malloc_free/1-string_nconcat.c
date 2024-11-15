#include "main.h"
/**
 * string_nconcat - concatenate 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: the final string
 * Return: n
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *final_string;
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    while (s1[a] != '\0')
        a++;
    while (s2[b] != '\0')
        b++;
    if (n > b)
        n = b;
    final_string = malloc(sizeof(char) * (a + n + 1));
    if (final_string == NULL)
        return (NULL);
    for (i = 0; i < a; i++)
        final_string[i] = s1[i];
    for (j = 0; j < n; j++)
        final_string[i + j] = s2[j];
    final_string[i + j] = '\0';
    return (final_string);
}