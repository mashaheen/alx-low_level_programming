#include "main.h"
/**
 * more_numbers - entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	char chr;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (chr = '0'; chr <= '9'; chr++)
		{
			_putchar(chr);
		}
		putchar('\n');
	}
	putchar('\n');
}
