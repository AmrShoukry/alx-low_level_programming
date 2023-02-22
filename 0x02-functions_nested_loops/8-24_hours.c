#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int h, m;
	char ch[2], cm[2];

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else
			{
				ch = h + '0';
				_putchar(ch[0]);
				_putchar(ch[1]);
			}
			
			_putchar(':');	

			if (m < 10)
			{
				/* printf("0%i", m); */
			}
			else
			{
				/* printf("%i", m); */
			}
			_putchar('\n');
		}
	}
}
