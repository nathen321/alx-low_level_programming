#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creat a dogo
 * @name: dogo's name
 * @age: dogo's age
 * @owner: owner of the dogo
 *
 * Return: a dogo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *best_dogo;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		best_dogo = malloc(sizeof(dog_t));

		if (best_dogo == NULL)
			return (NULL);

		best_dogo->name = malloc(sizeof(char) * name_l);

		if (best_dogo->name == NULL)
		{
			free(best_dogo);
			return (NULL);
		}

		best_dogo->owner = malloc(sizeof(char) * own_l);

		if (best_dogo->owner == NULL)
		{
			free(best_dogo->name);
			free(best_dogo);
			return (NULL);
		}

		best_dogo->name = _strcpy(best_dogo->name, name);
		best_dogo->owner = _strcpy(best_dogo->owner, owner);
		best_dogo->age = age;
	}

	return (best_dogo);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
