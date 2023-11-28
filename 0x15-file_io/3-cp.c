#include <stdio.h>
#include "main.h"

/**
 * main - copy file into file
 * @argc: ...
 * @argv: ...
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy(argv[1], argv[2]);
	exit(0);
}

/**
 * copy - copy file into file
 * @file1: ....
 * @file2: ....
 *
 * Return: ....
 */
void copy(const char *file1, const char *file2)
{
	int ifp, ofp, readed;
	char buff[1024];

	ifp = open(file1, O_RDONLY);
	if (!file1 || ifp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}

	ofp = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(ifp, buff, 1024)) > 0)
	{
		if (write(ofp, buff, readed) != readed || ofp == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2), exit(99);
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}

	if (close(ofp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofp);
		exit(100);
	}

	if (close(ifp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ifp);
		exit(100);
	}
}
