#include <stdlib.h>
#include "main.h"

/**
 * strtow - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @str: string
 *
 * Return: Always 0 (Success)
 */

char **strtow(char *str)
{
	int i;
	char **stringArray;
	int wordCount = 1;
	int charCount = 0;
	int overallCount = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[overallCount] != '\0')
	{
		if (str[overallCount] == ' ')
		{
			wordCount++;
		}
		overallCount++;
	}
	stringArray = (char **) malloc(sizeof(char *) * (wordCount + 1));

	overallCount = 0;
	charCount = 0;

	for (i = 0; i < wordCount; i++)
	{
		while (str[overallCount] != ' ' || str[overallCount])
		{
			charCount++;
		}
		stringArray[i] = (char *) malloc(sizeof(char) * charCount);
		overallCount++;
		charCount = 0;
	}

	return (stringArray);
}
