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
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == 'q' || chr == 'e')
		{
			continue;
		}
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
