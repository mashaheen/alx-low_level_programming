#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * str_concat - print alphabet
 * @s1: argument description
 * @s2: argument description
 *
 * Return: pointer to newchar
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int s1Size;
	int s2Size;
	char *array;

	s1Size = strlen(s1);
	s2Size = strlen(s2);

	array = malloc(sizeof(char) * (s1Size + s2Size));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1Size; i++)
	{
		array[i] =  s1[i];
	}
	for (i = 0; i < s2Size; i++)
	{
		array[i + s1Size] = s2[i];
	}
	return (array);

}
