#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a name as is
 *
 * @separator: s
 * @n: f
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if ((i == 0 || separator == NULL) && va_arg(ap, char *) != NULL)
		{
			printf("%s", va_arg(ap, char *));
		}
		else if (va_arg(ap, char *) == NULL)
		{
			continue;
		}
		else
		{
			printf("%s%s", separator, va_arg(ap, char *));
		}
	}

	printf("\n");

	va_end(ap);
}
