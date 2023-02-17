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

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
