#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_bit - function
 *
 * @n: header
 * @index: num
 *
 * Description: print
 *
 * Return: Always (0);
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0;
	unsigned long int number = n;
	int remainder;
	unsigned long int length = 0;
	int *text;

	if (number == 0)
	{
		length = 1;
	}
	while (number != 0)
	{
		number = number / 2;
		length++;
	}

	if (index >= length)
	{
		return (-1);
	}

	number = n;
	text = malloc(sizeof(int) * length);

	if (text == NULL)
	{
		return (-1);
	}

	for (i = 0; i < length; i++)
	{
		remainder = number % 2;
		number = number / 2;
		*(text + i) = remainder;
	}

	return (*(text + index));
}
