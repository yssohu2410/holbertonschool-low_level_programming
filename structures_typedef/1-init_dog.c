#include "dog.h"
#include <stddef.h>
/**
  * init_dog - init
  * @d: d
  * @name: name
  * @age: age
  * @owner: owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
