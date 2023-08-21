#include"main.h"
/**
 * puts2 - print alphabet
 * @str: argument desc
 *
 * Return: void
 */

void puts2(char *str)
{
	do {
		if (*str == '\0')
		{
			break;
		}
		_putchar(*str);
		str = str + 2;
	} while (*str != '\0' && *(str - 1) != '\0');
	_putchar('\n');
}
