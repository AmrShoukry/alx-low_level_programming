#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @b: number
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
