#include"main.h"
/**
 * jack_bauer - print alphabet
 *
 * Return : void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf('%02d:%02d',i,j);
		}
	}
}
