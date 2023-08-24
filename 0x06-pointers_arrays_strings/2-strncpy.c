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
	char *des = dest;
	char *sr = src;
	int i = 0;

	while (*sr != '\0')
	{
		if (i >= n)
		{
			*des = '*';
		} else
		{
			*des = *sr;
		}
		sr++;
		des++;
		i++;
	}
	*des = '\0';
	des = dest;

	return (des);
}
