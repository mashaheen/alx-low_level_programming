#include"main.h"
/**
 * _strcat - print alphabet
 * @dest: argument description
 * @src: argument
 *
 * Return: pointer to newchar
 */
char *string_toupper(char *p)
{
	char *start = p;

	while (*start != '\0')
	{
		if (*start >= 'a' && *start <= 'z')
		{
			*start = *start - 32;
		}

		start++;
	}
	return (p);
}
