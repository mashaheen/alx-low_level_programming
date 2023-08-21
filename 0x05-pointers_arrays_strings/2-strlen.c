#include"main.h"
/**
 * _strlen - print alphabet
 * @s: argument description
 *
 * Return: counter for strlen
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
