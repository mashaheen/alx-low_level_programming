#include <stdio.h>
/**
 * myFunc - entry point
 *
 * Return: void
 */
void myFunc(void)
{
	printf("_putchar\n");
}

void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
