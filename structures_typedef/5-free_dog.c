#include "dog.h"

/**
 * free_dog - function that free the dog
 *
 * @d: specifier
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->owner);
	free(d->name);
	free(d);
}
