#include <stdio.h>
#include <stdlib.h>

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
	if (argc != 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		printf("%i\n", n1 * n2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
