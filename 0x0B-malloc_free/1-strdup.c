#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * _strdup - print alphabet
 * @str: argument description
 *
 * Return: pointer to newchar
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] =  str[i];
	}
	return (array);

}
