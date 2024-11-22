#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string between numbers
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int a = 0;
	char *b;
	va_start (s, n);
	while (a < n)
	{
		b = va_arg (s, char *);
		if (b == NULL)
			printf ("(nil)");
		else
			printf("%s", b);
		if (a < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		a++;
	}
	printf("\n");
	va_end (s);
}