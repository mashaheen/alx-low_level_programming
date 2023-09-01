#include"main.h"
/**
 * cap_string - print alphabet
 * @p: argument description
 *
 * Return: pointer to newchar
 */
char *cap_string(char *p)
{
	char *start = p;

	while (*start != '\0')
	{
		if(start == p)
		{
			if(*start >= 'a' && *start <= 'z')
			{
				*start = *start - 32;
			}
		} else if (!((*(start - 1) >= 'a' && *(start - 1) <= 'z') || (*(start - 1) >= 'A' && *(start-1) <= 'Z')))
		{
			if (*(start -1) >= '0' && *(start - 1) <= '9')
			{

			} else if (((*(start) >= 'a' && *(start) <= 'z')))
			{
				*start = *start -32;
			}
		}
		start++;
	}
	return (p);
}
