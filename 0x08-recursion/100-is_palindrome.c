#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * palindrome_check - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 * @start: number
 * @end: number
 *
 * Return: Always 0
*/

int palindrome_check(char *s, int start, int end)
{
	if (end <= start)
	{
		return (1);
	}
	else
	{
		if (s[start] == s[end])
		{
			start++;
			end--;
			return (palindrome_check(s, start, end));
		}
		else
		{
			return (0);
		}
	}
}




/**
 * is_palindrome - check the code
 *
 * Description: 'Function'
 *
 * @s: string
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	return palindrome_check(s, 0, strlen(s) - 1);
}
