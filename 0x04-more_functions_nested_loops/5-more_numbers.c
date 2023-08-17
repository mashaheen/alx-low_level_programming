#include "main.h"
/**
 * more_numbers - entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	int chr;
	int i;

	for (i = 0; i < 10; i++)
	{
		chr = 0;
		for (chr = 0; chr <= 14; chr++)
		{
			_putchar(chr + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
