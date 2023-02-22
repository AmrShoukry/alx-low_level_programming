#include "main.h"

/**
 * hours_check - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * @h: hours
 *
 * Return: Always 0 (Success)
 */

void hours_check(int h)
{
	int temp, i;
	char ch[2];

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

/**
 * minutes_check - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * @m: minutes
 *
 * Return: Always 0 (Success)
 */


void minutes_check(int m)
{
	int temp, i;
	char cm[2];

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
}

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

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			hours_check(h);

			_putchar(':');

			minutes_check(m);

			_putchar('\n');
		}
	}
}
