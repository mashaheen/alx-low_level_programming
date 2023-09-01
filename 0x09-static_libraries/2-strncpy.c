#include"main.h"
/**
 * _strncpy - print alphabet
 * @dest: argument description
 * @src: argument
 * @n: number of letters in second string
 *
 * Return: pointer to newchar
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *point = src;

	while (*dest != '\0')
	{
		if( i <= n)
		{
			*dest = 'a';
			*point = 'b';
		}
		i++;
	}

	return (dest);
}
