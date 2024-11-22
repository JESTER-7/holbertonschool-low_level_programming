#ifndef VARIADIC
#define VARIADIC

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif

#ifndef ALED
#define ALED

typedef struct structur
{
	char *c;
	void (*function)(va_list uwu);
} structur;

void print_int(va_list uwu);
void print_float(va_list uwu);
void print_char(va_list uwu);
void print_string(va_list uwu);

#endif
