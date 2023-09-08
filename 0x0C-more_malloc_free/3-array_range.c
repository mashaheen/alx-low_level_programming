#include"main.h"
/**
 * array_range - func
 * @min: argument description
 * @max: argument description
 *
 * Return: return
 */
int *array_range(int min, int max)
{
	int *p;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
