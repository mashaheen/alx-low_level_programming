#include"main.h"
/**
 * _memset - print alphabet
 * @s: argument description
 * @b: argument
 * @n: number
 *
 * Return: pointer to newchar
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	int i;

	for (int i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	*s = '\0';

	return (temp);
}
