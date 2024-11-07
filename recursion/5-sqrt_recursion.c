#include "main.h"
/**
 * _sqrt_recursion - give the natural square root of a number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
    float sqrt;
    sqrt = n / 2;

    if (n < 0)
    {
        return (-1);
    }
    else
    {
        return (n * _sqrt_recursion(n, sqrt - 1));
    }

}