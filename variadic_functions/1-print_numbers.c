#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: string between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list s;

	unsigned int a = 0;

	va_start(s, n);

	while (a < n)
	{
		printf("%d", va_arg(s, int));
		if (a < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		a++;
	}
	printf("\n");
	va_end(s);
}
