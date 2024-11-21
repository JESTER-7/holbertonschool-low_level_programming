#include "variadic_functions.h"
/**
 * sum_them_all - sum all the int
 * @n: all the int
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list s;
    int sum = 0;
    unsigned int a;
    if (n == 0)
        return (0);
    va_start (s, n);
    for (a = 0; a < n; a++)
        sum += va_arg (s, int);
    va_end (s);
    return (sum);
}