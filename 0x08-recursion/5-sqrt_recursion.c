#include <stdio.h>
/**
 * sqroot - checks the input
 * @n: argument desc
 * @base: argument desc
 * Return: number
 */
int sqroot(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (sqroot(n + 1, base));
}
/**
 * _sqrt_recursion - runs sqroot
 * @n: argument desc
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (sqroot(1, n));
}
