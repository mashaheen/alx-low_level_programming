#include"main.h"
/**
 * print_rev - print alphabet
 * @s: argument description
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *temp = s;

	while (*temp != '\0')
	{
		temp++;
	}
	for (temp = temp - 1; temp >= s; temp--)
	{
		_putchar(*temp);
	}
	_putchar('\n');
}
