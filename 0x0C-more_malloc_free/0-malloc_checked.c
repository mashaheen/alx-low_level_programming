#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * malloc_checked - print alphabet
 * @b: argument description
 *
 * Return: pointer to newchar
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem != NULL)
	{
		return (mem);
	}
	exit(98);
}
