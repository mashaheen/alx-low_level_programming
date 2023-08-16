#include"main.h"
/**
 * print_last_digit - print alphabet
 * @c: Description of parameter x
 *
 * Return: 1 if the number is lowercase. 0 otherwise
 */
int print_last_digit(int c)
{
	int i = c % 10;
	putchar(i);
	putchar(i);
	return (i);
}
