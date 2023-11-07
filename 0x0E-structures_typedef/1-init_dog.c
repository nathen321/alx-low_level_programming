#include <stdio.h>
#include "dog.h"

/**
 * init_dog - creat a dogo
 * @d: the dogo
 * @name: dogo's name
 * @age: dogo's age
 * @owner: owner of the dogo
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
