#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @argc: number
 * @argv: array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int counter = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		while (argv[1][counter] != '\0')
		{
			if (isdigit(argv[1][counter]) == 0)
			{
				printf("Error\n");
				exit(98);
			}
			counter++;
		}

		counter = 0;

		while (argv[2][counter] != '\0')
		{
			if (isdigit(argv[2][counter]) == 0)
			{
				printf("Error\n");
				exit(98);
			}
			counter++;
		}

		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		printf("%i\n", n1 * n2);
		return (0);
	}
}
