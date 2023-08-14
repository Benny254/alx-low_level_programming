#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - To frees memory allocated for a struct dog
 * @d: The struct dog to be free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

