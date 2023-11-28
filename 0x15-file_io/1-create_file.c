#include "main.h"
/**
 * read_textfile - ....
 * @filename: ....
 * @letters: ....
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC , 0600);

	if (fd == -1)
		return (0);

	if (text_content == NULL)
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
