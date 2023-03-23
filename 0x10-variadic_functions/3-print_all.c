#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints a name as is
 *
 * @format: any
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	int i = 0, counter = 0;
	va_list ap;
	char *sep = "", *text;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (counter != 0)
			sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				counter++;
				break;
			case 'i':
				printf("%s%i", sep, va_arg(ap, int));
				counter++;
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				counter++;
				break;
			case 's':
				text = va_arg(ap, char *);
				if (text == NULL)
				{
					text = "(nil)";
				}
				printf("%s%s", sep, text);
				counter++;
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
