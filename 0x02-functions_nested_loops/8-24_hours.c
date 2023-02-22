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
	char ch, cm;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
			}
			ch = h + '0';
			_putchar(ch);

			_putchar(':');	

			if (m < 10)
			{
				_putchar('0');
			}
			cm = m + '0';
			_putchar(cm);
		}
		_putchar('\n');
	}
}
