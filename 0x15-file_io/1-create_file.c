#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * create_file - function
 *
 * @filename: header
 * @text_content: letters
 *
 * Description: print
 *
 * Return: Always (0);
 */

int create_file(const char *filename, char *text_content)
{
	int file_fd;
	int write_fd;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, F_OK) == -1)
	{
		file_fd = creat(filename, 0600);
	}
	else
	{
		file_fd = open(filename, O_WRONLY);
	}

	write_fd = write(file_fd, text_content, strlen(text_content));

	if (file_fd == -1 || write_fd == 1 || filename == NULL)
	{
		return (-1);
	}
	return (1);

}
