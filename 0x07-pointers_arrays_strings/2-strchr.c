#include"main.h"
/**
 * _strchr - find the first occurance of a letter
 * @s: pointer to first letter of string
 * @c: target letter
 *
 * Return: pointer of target letter
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
	if (c == '\0')
	{
		return  (s);
	}
	return (NULL);
}
