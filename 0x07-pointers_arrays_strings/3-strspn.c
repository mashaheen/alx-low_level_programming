#include"main.h"
/**
 * _strspn - print alphabet
 * @s: argument description
 * @accept: argument
 *
 * Return: pointer to newchar
 */
unsigned int _strspn(char *s, char *accept)
{
	char *temp = accept;
	unsigned int size = 0;

	while (*s != '\0')
	{
		if (*temp == '\0')
		{
			return (size);
		}
		if (*temp == *s)
		{
			size++;
			s++;
			temp = accept;
		} else
		{
			temp++;
		}
	}
	return (size);
}
