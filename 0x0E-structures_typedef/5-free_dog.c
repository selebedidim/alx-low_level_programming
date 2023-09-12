#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -frees the memory of the dogs created
 * @d:pointer to freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
