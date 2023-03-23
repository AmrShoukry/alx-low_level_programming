#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a name as is
 *
 * @separator: s
 * @n: f
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
		{
			printf("%i", va_arg(ap, int));
		}
		else
		{
			printf("%s%i", separator, va_arg(ap, int));
		}
	}

	printf("\n");

	va_end(ap);
}
