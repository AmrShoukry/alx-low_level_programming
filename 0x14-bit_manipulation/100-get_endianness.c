#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>

/**
 * get_endianness - function
 *
 * Description: print
 *
 * Return: Always (0);
 */

int get_endianness(void)
{
	int number = 0x76543210;
	char *pointer = (char *)&number;

	if (*pointer == 16)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
