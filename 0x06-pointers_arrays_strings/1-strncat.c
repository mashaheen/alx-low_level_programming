#include"main.h"
/**
 * _strncat - print alphabet
 * @dest: argument description
 * @src: argument
 * @n: number of letters in second string
 *
 * Return: pointer to newchar
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	char *second = src;
	int i = 0;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*second != '\0' && i < n)
	{
		*temp = *second;
		second++;
		temp++;
		i++;
	}
	*temp = '\0';
	temp = dest;

	return (temp);
}
