#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return (0);
}
