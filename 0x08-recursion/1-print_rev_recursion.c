#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 *
 * Return: Always 0.
 */

void print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	print_rev_recursion(s + 1);

	printf("%c", *s);
}
