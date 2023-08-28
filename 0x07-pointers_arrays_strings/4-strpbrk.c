#include"main.h"
/**
 * _strpbrk - print alphabet
 * @s: argument description
 * @accept: argument
 *
 * Return: pointer to newchar
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	while (*s != '\0')
	{
		if (*temp == '\0')
		{
			temp = accept;
			s++;
		}
		if (*temp == *s)
		{
			return (s);
		} else
		{
			temp++;
		}
	}
	return (NULL);
}
