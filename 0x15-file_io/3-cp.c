#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

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

int main(int argc, char *argv[])
{
	int fileTo_fd, fileFrom_fd, closeFileTo_fd, closeFileFrom_fd, read_fd;
	int write_fd;
	char text[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom_fd = open(argv[1], O_RDONLY);
	fileTo_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileFrom_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fileTo_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_fd = read(fileFrom_fd, text, 1024)) > 0)
	{
		write_fd = write(fileTo_fd, text, read_fd);
		if (write_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closeFileFrom_fd = close(fileFrom_fd);
	closeFileTo_fd = close(fileTo_fd);
	if (closeFileFrom_fd == -1 || closeFileTo_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", -1);
		exit(100);
	}
	return (0);
}
