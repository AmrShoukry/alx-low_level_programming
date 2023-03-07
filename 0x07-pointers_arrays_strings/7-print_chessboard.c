#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 *
 * Description: 'Function'
 *
 * @a: string
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
