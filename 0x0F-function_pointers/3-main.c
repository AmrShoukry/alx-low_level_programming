#include <stdio.h>
#include <stdlib.h>
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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (argv[2] != "+" || argv[2] != "-" || argv[2] != "*" || argv[2] != "/" || argv[2] != "%")
	{
		return (NULL);
	}

	result = get_op_func(argv[2])(n1, n2);
	printf("%i\n", result);

	return (0);
}
