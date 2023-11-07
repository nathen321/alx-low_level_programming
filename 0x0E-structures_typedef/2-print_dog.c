#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a dogo
 * @d: the dogo
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s",
				(d->name ? d->name : (nil)),
				(d->age ? d->age : (nil)),
				(d->owner ? d->owner : (nil)));
	}
}
