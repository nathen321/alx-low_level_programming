#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - ....
 * @filename: ....
 * @letters: ....
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!filename || !buff)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(1, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
