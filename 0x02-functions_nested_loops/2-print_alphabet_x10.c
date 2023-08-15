#include"1-alphabet.c"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return : void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	}
	putchar('\n');
}
