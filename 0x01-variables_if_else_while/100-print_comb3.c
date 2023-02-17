#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Main function is used to print combinations'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48; n <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
