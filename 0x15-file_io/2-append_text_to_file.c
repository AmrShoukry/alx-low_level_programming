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

	if (access(filename, F_OK) == -1 || filename == NULL)
	{
		return (-1);
	}
	file_fd = open(filename, O_APPEND);

	if (text_content != NULL)
	{
		fputs(text_content, file_fd)
	}

	if (file_fd == -1)
	{
		return (-1);
	}
	return (1);

}
