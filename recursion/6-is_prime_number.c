#include "main.h"
/**
 * is_prime_number - return 1 if the number is prime
 * @n: numbers
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
    int i = 2;

    if (n == 0)
        return (0);
    is_prime_number(n - 1);
    if (n % i == 0)
        return (0);
    else
        return (1);
}