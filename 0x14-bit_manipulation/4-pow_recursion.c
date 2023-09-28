#include"main.h"
/**
 * _pow_recursion - print alphabet
 * @x: argument description
 * @y: argument description
 *
 * Return: pointer to newchar
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return ((_pow_recursion(x, y - 1) * x));
}
