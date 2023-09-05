#include"main.h"
#include<stdlib.h>
/**
 * create_array - print alphabet
 * @size: argument description
 * @c: character
 *
 * Return: pointer to newchar
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] =  c;
	}
	return (array);

}
