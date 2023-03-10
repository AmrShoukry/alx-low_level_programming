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
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && argv[i][0] != '0' && argv[i][1] == '\0')
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%i\n", sum);

	return (0);
}
