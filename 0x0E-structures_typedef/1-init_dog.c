#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Intialize a variable of type
 * @d: param1
 * @name: param2
 * @age: param3
 * @owner: param4
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
