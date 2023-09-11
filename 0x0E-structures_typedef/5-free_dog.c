#include "dog.h"
/**
 * free_dog - frees a dog
 *
 * @s: dog to be freed
 *
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
			free(d->name);
		if (d->owner)
			free((*d).owner);
		free(d);
	}
}
