#include "dog.h"
#include <stdlib.h>

/**
 * main -
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
