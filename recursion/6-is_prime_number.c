#include "main.h"
/**
 * increment - increment
 * @a: variable to count and test all the numbers
 * @n: the number
 * Return: increment a+1
 */
int increment(int a, int n)
{
    if (a >= n) /* check if n can be divided, if not return 1 and if a = n too */
        return (1);
    if (n % a == 0) /* if n can be divided it's not prime */
        return 0;
    return increment(a+1, n);
}
/**
 * is_prime_number - say if a number is prime or not
 * @n: the number to test
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
    if (n == 1 || n < 0)
        return (0);
    return increment(2,n);
}
