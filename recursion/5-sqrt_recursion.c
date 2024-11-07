#include "main.h"
/**
 * variable - verify the square root
 * @a: just a variable
 * @n: ooo
 * Return: variable
 */
int variable(int a, int n)
{
    if (a*a == n)
        return (a);
    if (a > n / 2 )
        return (-1);
    return variable(a + 1, n);
}
/**
 * _sqrt_recursion - give the natural square root of a number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    if (n == 1 || n == 0)
        return (n);
    else
    {
        return variable(1, n);
    }
}