#include"main.h"
/**
 * reverse_array - print alphabet
 * @a: argument description
 * @n: argument
 *
 * Return: pointer to newchar
 */
void reverse_array(int *a, int n)
{
	in *revS = a + n;

	for (int i = n-1; i >= 0; i--)
	{
		*revS = *(a + i);
		rev++;
	}
	a = a + n;
}
