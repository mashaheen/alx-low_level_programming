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
		if(start == P)
		{
			*start = *start - 32;
		} else if (!((*(start - 1) >= 'a' && *(start - 1) <= 'z') || (*(start - 1) >= 'A' && *(start-1) <= 'Z')))
		{
		       	if (((*(start) >= 'a' && *(start) <= 'z') || (*(start) >= 'A' && *(start) <= 'Z')))
			{
				*start = *start -32;
			}
		}
		start++;
	}
	return (p);
}
