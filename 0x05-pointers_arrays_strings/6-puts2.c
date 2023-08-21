#include"main.h"
/**
 * puts2 - print alphabet
 * @str: argument desc
 *
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*(str - 1) == '\0')
		{
			break;
		}
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
