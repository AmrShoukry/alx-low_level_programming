#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @s1: string
 * @s2: string
 *
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	char *strMalloc;
	unsigned int i;
	unsigned int counter1 = 0;
	unsigned int counter2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[counter1] != '\0')
		counter1++;

	while (s2[counter2] != '\0')
		counter2++;
	counter2++;
	
	strMalloc = malloc(sizeof(char) * (counter1 + counter2));

	if (strMalloc == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < counter1; i++)
			strMalloc[i] = s1[i];
		for (i = 0; i < counter2; i++)
			strMalloc[counter1 + i] = s2[i];
		return (strMalloc);
	}
}
