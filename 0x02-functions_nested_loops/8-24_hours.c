#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

void hours_check(void)
{
	if (h < 10)
	{
		_putchar('0');
		_putchar(h + '0');
	}
	else
	{
		temp = h;

		for (i = 0; i < 2; i++)
		{
			ch[i] = (temp % 10) + '0';
			temp = temp / 10;
		} 
		for (i = 1; i >= 0; i--)
		{
			_putchar(ch[i]);
		}
	}		
}

void jack_bauer(void)
{
	int h, m, i, temp;
	char ch[2], cm[2];

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			hours_check();
			
			_putchar(':');	

			if (m < 10)
			{
				_putchar('0');
				_putchar(m + '0');
			}
			else
			{
				temp = m;

				for (i = 0; i < 2; i++)
				{
					cm[i] = (temp % 10) + '0';
					temp = temp / 10;
				} 
				for (i = 1; i >= 0; i--)
				{
					_putchar(cm[i]);
				}
			}
			
			_putchar('\n');
		}
	}
}
