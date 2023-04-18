#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: char
 * Return: return 0
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
