#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char chr;

	for (chr = '0'; chr <= '9'; chr++)
	{
		if (chr == '2' || chr == '4')
			continue;
		_putchar(chr);
	}
	putchar('\n');
}
