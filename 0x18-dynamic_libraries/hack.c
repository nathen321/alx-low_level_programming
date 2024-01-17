#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int printf(const char *useless, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 30);
	write(1, "Congratulations, you win the Jackpot!\n", 40);
	exit(EXIT_SUCCESS);
}
