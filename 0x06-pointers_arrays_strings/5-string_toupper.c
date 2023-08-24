#include"main.h"
/**
 * string_toupper - print alphabet
 * @p: argument description
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
