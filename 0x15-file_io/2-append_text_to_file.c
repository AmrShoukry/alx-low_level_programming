#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function
 *
 * @filename: header
 * @text_content: letters
 *
 * Description: print
 *
 * Return: Always (0);
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_fd;
	int write_fd;

	if (access(filename, F_OK) == -1 || filename == NULL)
	{
		return (-1);
	}

	file_fd = open(filename, O_WRONLY | O_APPEND);

	if (file_fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_fd = write(file_fd, text_content, strlen(text_content));

		if (write_fd == -1)
		{
			return (-1);
		}
	}

	close(file_fd);

	return (1);

}
