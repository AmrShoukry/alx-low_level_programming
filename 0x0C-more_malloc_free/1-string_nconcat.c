#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @s1: string1
 * @s2: string2
 * @b: number
 *
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int b)
{
	char *ptr;
	unsigned int i;
	unsigned int counter1 = 0;
	unsigned int counter2 = 0;

	while (s1[counter1] != '\0')
	{
		counter1++;
	}
	while (s2[counter2] != '\0')
	{
		counter2++;
	}
	if (counter2 > b)
	{
		counter2 = b;
	}

	ptr = malloc(counter1 + counter2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < counter1; i++)
		{
			ptr[i] = s1[i];
		}
		for (i = 0; i < counter2; i++)
		{
			ptr[i + counter1] = s2[i];
		}
		ptr[i + counter1] = '\0';

		return (ptr);
	}
}
