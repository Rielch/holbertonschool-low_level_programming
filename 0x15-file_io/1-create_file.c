#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, tmp, text_size;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	for (text_size = 0; text_content[text_size] != '\0'; text_size++)
	{
	}
	tmp = write(fd, text_content, text_size);
	if (tmp == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
