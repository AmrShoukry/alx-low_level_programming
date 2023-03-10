#include <stdio.h>

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
		printf("%i\n", argv[1] * argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
