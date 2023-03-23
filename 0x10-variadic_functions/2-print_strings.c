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
	char *text;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
		{
			text = "(nil)";
		}
		else if (i == 0 || separator == NULL)
		{
			text = va_arg(ap, char *);
			printf("%s", text);
		}
		else
		{
			text = va_arg(ap, char *);
			printf("%s%s", separator, text);
		}
	}

	printf("\n");

	va_end(ap);
}
