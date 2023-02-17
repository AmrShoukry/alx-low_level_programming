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

	for (n = 48; n <= 56; n++)
	{
		putchar(n);
		if (n != 56)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
