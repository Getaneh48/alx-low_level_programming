#include "dog.h"
#include <stdlib.h>

/**
* free_dog -  function that frees memory used by the stucture.
*
* @d: a structure of type dog
*
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
