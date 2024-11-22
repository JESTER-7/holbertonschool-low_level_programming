#include "variadic_functions.h"

/**
 * print_int - print an int
 * @uwu: argument
 */
void print_int(va_list uwu)
{
	int i = va_arg(uwu, int);

	printf("%d", i);
}

/**
 * print_char - print a char
 * @uwu: argument
 */
void print_char(va_list uwu)
{
	int c = va_arg(uwu, int);

	printf("%c", (char)c);
}

/**
 *  print_string - print a string
 *  @uwu: argument
 */
void print_string(va_list uwu)
{
	char *s = va_arg(uwu, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_float - print a float
 * @uwu: argument
 */
void print_float(va_list uwu)
{
	double f;

	f = va_arg(uwu, double);
	printf("%f", (float)f);
}

/**
 * print_all - print the result
 * struct - o
 * @format: check the format
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	int b = 0;
	va_list uwu;
	char *s = "";

	structur all[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};
	va_start(uwu, format);
	while (format != NULL && format[b] != '\0')
	{
		while (all[a].c != NULL)
		{
			if (*(all[a].c) == format[b])
			{
				printf("%s", s);
				s = ", ";
				all[a].function(uwu);
			}
			a++;
		}
		b++;
		a = 0;
	}
	printf("\n");
	va_end(uwu);
}
