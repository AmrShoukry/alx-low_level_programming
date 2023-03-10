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
	int coins[] = {25, 10, 5, 2, 1};
	int times = 0;
	int i = 0;
	int money;

	if (argc == 2)
	{
		if ((atoi(argv[1]) == 0 && argv[1][0] == '0' && argv[1][1] == '\0') || atoi(argv[1]) < 0)
		{
			printf("Error\n");
			return (1);
		}

		money = atoi(argv[1]);

		while (money < coins[i] && money != 0 && i < 5)
		{
			i++;
		}
		while (money >= coins[i] && money != 0 && i < 5)
		{
			money -= coins[i];
			times++;
			while (money < coins[i] && money != 0 && i < 5)
			{
				i++;
			}
		}

		printf("%i\n", times);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
