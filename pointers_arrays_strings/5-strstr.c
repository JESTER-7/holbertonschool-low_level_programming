#include "main.h"
/**
 * _strstr - find a substring in a string
 * @haystack: string
 * @needle: substring
 * Return: needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
    int a = 0;
    int b = 0;

    while (haystack[a] != '\0')
    {
        while (needle[b] != '\0')
        {
            a++;
            if (haystack[a] != needle[b])
            {
                b = 0;
                break;
            }
            if (haystack[a] == needle[b])
            {
                b++;
                if (needle[b] == '\0')
                    return (needle);
            }
        }
    }
    return (NULL);
}