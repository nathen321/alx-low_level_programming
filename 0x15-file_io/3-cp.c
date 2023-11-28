#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copy file into file
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	copy(av[1], av[2]);
	return (0);
}

/**
 * copy - copy file into file
 * @file1: ....
 * @file2: ....
 *
 * Return: Always 0.
 */
void copy(const char *file1,const char *file2)
{
	int ifp, ofp, readed;
	char buff[1024];

	ifp = open(file1, O_RDONLY);
	ofp = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (ifp == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}

	while ((readed = read(ifp, buff, 1024)) > 0)
	{
		if (write(ofp, buff, readed) != readed || ofp == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			exit(99);
		}
	}

	if (close(ifp) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ifp);
		exit(100);
	}
	if (close(ofp) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ofp);
		exit(100);
	}
}
