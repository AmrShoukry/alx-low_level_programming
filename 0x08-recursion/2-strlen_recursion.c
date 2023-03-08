#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 *
 * Return: Always 0.
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + strlen_recursion(s + 1));
}
