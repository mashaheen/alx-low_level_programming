#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - prints dog
  * @d: arg
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name != NULL ? (printf("Name: %s\n", d->name)) :
			(printf("Name: (nil)\n"));

		printf("Age: %f\n", d->age);

		d->owner != NULL ? (printf("Owner: %s\n", d->owner)) :
			(printf("Owner: (nil)\n"));
	}
}
