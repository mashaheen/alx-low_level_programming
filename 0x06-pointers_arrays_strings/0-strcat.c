#include"main.h"
/**
 * _strcat - print alphabet
 * @dest: argument description
 * @src: argument
 *
 * Return: pointer to newchar
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	char *second = src;

	while (*temp != '\0')
	{
		temp++;
	}
	while( *second != '\0')
	{
		*temp = *second;
		second++;
		temp++;
	}
	*temp = '\0';

	return (temp);
}
