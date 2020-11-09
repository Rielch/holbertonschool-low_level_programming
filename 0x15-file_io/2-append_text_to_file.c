#include "holberton.h"

/**
 * append_text_to_file - append text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text to write
 * Return: 1 if success and -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, tmp, text_size;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
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
