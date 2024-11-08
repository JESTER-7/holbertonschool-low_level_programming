#include "main.h"
/**
 * main - multiplie two numbers
 * @argc: arguments
 * @argv: Array of * to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i, j, k, l;
    char a;
    
    for (i = 1; i < argc; i++)
    {
        for (j = 1; argv[i][j] != '\0'; j++)
        {
            
        }
        for (k = 1; argv[i][k] != '\0'; k++)
        {
            l += argv[i][k]
        }
    }
    i = argv[1][0] - '0';
    j = argv[2][0] - '0';
    k = (i * j) + '0';
    _putchar(k);
    _putchar('\n');
    return (0);
}