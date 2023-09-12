#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - function
  * @name: argument 1
  * @age: argument 2
  * @owner: argument 3
  *
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *dog;

	namelen = strlen(name);
	ownerlen = strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(namelen * sizeof(dog->name));
	if (dog->name != NULL)
	{
		for (i = 0; i < namelen; i++)
			dog->name[i] = name[i];
	}

	dog->age = age;

	dog->owner = malloc(ownerlen * sizeof(dog->owner));
	if (dog->owner != NULL)
	{
		for (i = 0; i < ownerlen; i++)
			dog->owner[i] = owner[i];
	}
	return (dog);
}
