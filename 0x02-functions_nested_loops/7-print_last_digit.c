#include"main.h"
/**
 * print_last_digit - print alphabet
 * @c: Description of parameter x
 *
 * Return: 1 if the number is lowercase. 0 otherwise
 */
int print_last_digit(int c)
{
	int i = c;
	if( i < 0)
	{
		i = i * -1;
	}
	i = i % 10;
	putchar(i);
	return (i+'0');
}
