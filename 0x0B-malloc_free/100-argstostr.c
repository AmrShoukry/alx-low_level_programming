#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @ac: number
 * @av: number
 *
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *str;
	int counter = 0;
	int charCount = 0;
	int overall = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(int) * ac * sizeof(* av));
		while (counter < ac)
		{
			while (av[counter][charCount] != '\0')
			{
				str[overall] = av[counter][charCount];
				overall++;
				charCount++;
			}
			charCount = 0;
			counter++;

			str[overall] = '\n';
			overall++;
		}
		str[overall] = '\0';
	}
}
