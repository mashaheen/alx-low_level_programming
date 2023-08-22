#include"main.h"
/**
 * puts_half - print alphabet
 * @str: argument description
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count = 0;
	char *temp = str;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	while (*temp != '\0')
	{
		count++;
		temp++;
	}
	if (count % 2 == 0)
	{
		str = str + (count / 2);
	} else
	{
		str = str + (count / 2) - 2;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
