#include <stdio.h>
#include "dog.h"

/**
 *init_dog - initializes a variable of type struct dog
 *@b: the dog to be initialized
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner of the dog
 *
 *Description: aaksdjal
 *
 * Return: always null
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