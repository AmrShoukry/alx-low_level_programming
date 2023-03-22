#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

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
	int result;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2];

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (strcmp(s, "+") != 0 && strcmp(s, "-") != 0 && strcmp(s, "*") != 0 && strcmp(s, "/") != 0 && strcmp(s, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(s)(n1, n2);
	printf("%i\n", result);

	return (0);
}
