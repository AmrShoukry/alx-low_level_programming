#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Main function is used to print number combinations'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
