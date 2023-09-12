#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - fun
  * @d: arg1
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
