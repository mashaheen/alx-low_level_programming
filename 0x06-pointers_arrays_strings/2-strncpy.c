#include"main.h"
/**
 * _strncpy - print alphabet
 * @dest: argument description
 * @src: argument
 * @n: number of letters in second string
 *
 * Return: pointer to newchar
 */
char *_strncpy(char *dest, char *src, int n);
{
	char *temp = dest;
	char *second = src;
	int i = 0;

	while (*second != '\0')
	{
		if (i >= n)
		{
			*temp = '*';
		} else
		{
			*temp = *second;
		}
		second++;
		temp++;
		i++;
	}
	*temp = '\0';
	temp = dest;

	return (temp);
}
