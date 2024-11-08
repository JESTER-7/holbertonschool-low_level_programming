#include "main.h"
/**
 * print_number - Recursively find the last digit and print n
 * @n: The integer
 * Return: void
 */
void print_argc(int n)
{
    if (n / 10 != 0)
        print_argc(n / 10);
    _putchar((n % 10) + '0');
}
/**
 * main - Entry point of the program
 * @argc: arguments
 * @argv: Array of * to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void) argv;  /*delete unused variable*/
    print_argc(argc - 1);
    _putchar('\n');
    return (0);
}