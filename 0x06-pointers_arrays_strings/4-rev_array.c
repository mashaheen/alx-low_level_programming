#include"main.h"
/**
 * reverse_array - print alphabet
 * @a: argument description
 * @n: argument
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int end = n - 1;
	int temp;

	for (i = 0; i <= (n / 2) - 1; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + end);
		*(a + end) = temp;
		end--;
	}
}
