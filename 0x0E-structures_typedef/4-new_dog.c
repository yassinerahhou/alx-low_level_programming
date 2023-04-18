#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -  new dog.
 * @name: name of the dog
 * @age: age of the dogi
 * @owner: owner
 * Return: always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
	int i, namelen, ownerlen;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (namelen = 0; name[namelen]; namelen++)
		;

	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
		;

	p_dog->name = mallocnamelen + 1);
	p_dog->owner = malloc(ownerlen + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < ownerlen; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
