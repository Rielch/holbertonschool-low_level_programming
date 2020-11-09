#include "holberton.h"

/**
 * read_textfile - reads a file and prints it in stdout
 *
 * @filename: name of the file
 * @letters: letters to read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, writed, readed;
	char *buff = malloc((sizeof(char) * letters) + 1);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
	}

	readed = read(fd, buff, letters);
	buff[letters] = '\0';

	writed = write(1, buff, readed);

	if (writed == -1)
	{
		return (0);
	}

	close(fd);

	free(buff);

	return (writed);
}
