#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d:  variable
 * @name: dog's name
 * @age: dog's age
 * @owner:the owne 
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}

