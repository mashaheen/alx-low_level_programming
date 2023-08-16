#include"main.h"
/**
 * _print_sign - print alphabet
 * @c: Description of parameter x
 *
 * Return: 1 if the number is lowercase. 0 otherwise
 */
int _print_sign(int c)
{
	if (c > 0)
	{
		putchar ('+');
		return (1);
	} else if (c > 0)
	{
		putchar ('-');
		return (-1);
	}
	putchar ('0');
	return (0);
}
