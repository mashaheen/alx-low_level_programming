#include <stdio.h>
/**
 * myFunc - entry point
 *
 * Return: void
 */
void myFunc(void);
void print_alphabet(void);

void myFunc(void)
{
	printf("_putchar\n");
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
