#include"main.h"
/**
 * _strstr - print alphabet
 * @haystack: argument description
 * @needle: argument
 *
 * Return: pointer to newchar
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *temp = needle;

	while (*haystack != '\0')
	{
		while (*temp != '\0')
		{
			if (*temp == *haystack)
			{
				if (start != NULL)
				{
					start = haystack;
				}
				temp++;
				haystack++
			} else
			{
				start = NULL;
				haystack++;
				temp = needle;
			}
		}
	}
	return (start);
}
