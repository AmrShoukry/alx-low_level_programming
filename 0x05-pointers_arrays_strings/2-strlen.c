#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 *
 * Return: Always 0.
 */

int _strlen(int *s)
{
	int counter = 0;
	char current = '0';

	do
	{
		current = s[counter];
		counter++;
	} while (current != '\0');

	return counter - 1;

}
