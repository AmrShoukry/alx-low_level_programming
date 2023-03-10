#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Main function is used to print numbers'
 *
 * @argc: number
 * @argv: array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
