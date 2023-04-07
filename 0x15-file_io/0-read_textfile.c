#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - function
 *
 * @filename: header
 * @letters: letters
 *
 * Description: print
 *
 * Return: Always (0);
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *string = malloc(sizeof(char) * letters);
	int open_fd = open(filename, r, O_RDONLY);
	int read_fd = read(open_fd, str, letters);
	int write_fd = write(1, string, letters);

	if (filename == NULL || open_fd == -1 || read_fd == -1 || write_fd == -1)
	{
		return (0);
	}

	return (write_fd);
}
