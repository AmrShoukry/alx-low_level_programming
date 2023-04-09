#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * set_bit - function
 *
 * @n: header
 * @index: num
 *
 * Description: print
 *
 * Return: Always (0);
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 0, power = 1, temp = 0, result = 0, number = *n;
	unsigned long int length = 0;
	int remainder;
	int *text;

	if (number == 0)
		length = 1;
	while (number != 0)
	{
		number = number / 2;
		length++;
	}
	if (index >= length)
		length = index + 1;
	number = *n;
	text = malloc(sizeof(int) * length);
	if (text == NULL)
		return (-1);

	for (i = 0; i < length; i++)
	{
		temp = 0;
		power = 1;
		remainder = number % 2;
		number = number / 2;
		*(text + i) = remainder;
		if (i == index)
		{
			*(text + index) = 1;
		}
		while (temp < i)
		{
			power = power * 2;
			temp++;
		}
		result = result + (power * (*(text + i)));
	}
	*n = result;
	return (1);
}
