#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)
{
	int chr;

	for (chr = 48; chr < 58; chr++)
	{
		putchar (chr);
		if (chr != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
