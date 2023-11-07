#include <stdio.h>
#include "dog.h"

/**
 * print_dog
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
	}
}
