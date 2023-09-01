#include"main.h"
/**
 * _memcpy - print alphabet
 * @dest: argument description
 * @src: argument
 * @n: number
 *
 * Return: pointer to newchar
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (temp);
}
