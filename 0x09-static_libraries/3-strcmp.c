#include"main.h"
/**
 * _strcmp - print alphabet
 * @s1: argument description
 * @s2: argument
 *
 * Return: pointer to newchar
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*(s1 + 1) == '\0' && *(s2 + 1) != '\0')
		{
			return (*(s2 + 1) * -1);
		}
		if (*s2 == '\0')
		{
			return (*s1);
		}
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		} else
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
