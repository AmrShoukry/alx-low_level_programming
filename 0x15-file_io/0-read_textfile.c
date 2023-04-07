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
	int open_fd = open(filename, O_RDONLY);
	int read_fd = read(open_fd, string, letters);
	int write_fd = write(STDOUT_FILENO, string, read_fd);

	if (filename == NULL || open_fd == -1 || read_fd == -1 || write_fd == -1)
	{
		free(string);
		close(open_fd);
		return (0);
	}

	free(string);
	close(open_fd);
	return (read_fd);
}
