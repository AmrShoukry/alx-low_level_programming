#include "main.h";


/**
 * main - Entry point
 *
 * Description: 'Main function is used to print alphabets'
 *
 * Return: Always 0 (Success)
 */

int fibonacci(int n)
{

	if (n < 1)
	{
		return (0);
	}
	else if (n == 1 || n == 2)
	{
		return (n);
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
