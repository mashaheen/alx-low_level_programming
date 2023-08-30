#include"main.h"
/**
 * _puts_recursion - print alphabet
 * @s: argument description
 *
 * Return: pointer to newchar
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
