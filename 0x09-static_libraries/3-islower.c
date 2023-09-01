#include"main.h"
/**
 * _islower - print alphabet
 * @c: Description of parameter x
 *
 * Return: 1 if the number is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
