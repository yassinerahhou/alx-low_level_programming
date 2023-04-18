#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - Creates a new dog
 * @name: dog's
 * @age: dog's
 * @owner: dog's
 * Return: a new Dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
		return (NULL);

	if (d == NULL)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	strcpy(d->owner, owner);

	d->age = age;

	return (d);
}

