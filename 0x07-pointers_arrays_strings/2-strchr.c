#include"main.h"
/**
 * _strchr - print alphabet
 * @s: argument description
 * @c: argument
 *
 * Return: pointer to newchar
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return  (NULL);
}
