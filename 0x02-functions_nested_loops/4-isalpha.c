#include"main.h"
/**
 * _isalpha - print alphabet
 * @c: Description of parameter x
 *
 * Return: 1 if the number is alpha. 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
