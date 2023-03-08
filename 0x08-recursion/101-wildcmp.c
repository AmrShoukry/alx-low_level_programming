#include "main.h"
#include <stdio.h>

/**
 * wild_checker - check the code
 *
 * Description: 'Function'
 *
 * @s1: string
 * @s2: string
 * @s1_counter: number
 * @s2_counter: number
 *
 * Return: Always 0.
 */

int wild_checker(char *s1, char *s2, int s1_counter, int s2_counter)
{
	if (s1[s1_counter] != '\0' || s2[s2_counter] != '\0')
	{
		if (s2[s2_counter] == '*')
		{
			printf("i'm wild! s1:%c, s2:%c\n", s1, s2);
			return (wild_checker(s1, s2, s1_counter, s2_counter + 1));
		}

		if (s2[s2_counter] != s1[s1_counter])
		{
			if (s2[s2_counter - 1] == '*')
			{
				printf("previous is wild! s1:%c, s2:%c\n", s1, s2);
				return (wild_checker(s1, s2, s1_counter + 1, s2_counter));
			}
			else
			{
				printf("we are not the same! s1:%c, s2:%c\n", s1, s2);
				return (0);
			}
		}
		else
		{
			printf("we are matched! s1:%c, s2:%c\n", s1, s2);
			return (wild_checker(s1, s2, s1_counter + 1, s2_counter + 1 ));
		}
	}

	if (s2[s2_counter] == '\0')
	{
		printf("s2 is over! s1:%c, s2:%c\n", s1, s2);
		return (1);
	}
	
	printf("s1 and s2 are over! s1:%c, s2:%c\n", s1, s2);
	return (0);
}

/**
 * wildcmp - check the code
 *
 * Description: 'Function'
 *
 * @s1: string
 * @s2: string
 *
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	return (wild_checker(s1, s2, 0, 0));
}
