#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * _calloc - print alphabet
 * @nmemb: argument description
 * @size: argument description
 *
 * Return: pointer to newchar
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = 0;
	}
	return (p);

}
