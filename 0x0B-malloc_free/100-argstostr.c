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
	char *str;
	int counter = 0, charCount = 0, overall = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		while (counter < ac)
		{
			while (av[counter][charCount] != '\0')
			{
				overall++;
				charCount++;
			}
			counter++;
		}
		str = malloc(sizeof(char) * overall);
		overall = 0;
		counter = 0;
		charCount = 0;

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
	return (str);
}
