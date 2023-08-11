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

    for(chr = 97;chr < 127;chr++)
    {
        putchar('%c',chr);
    }
    putchar('\n');
	return (0);
}
