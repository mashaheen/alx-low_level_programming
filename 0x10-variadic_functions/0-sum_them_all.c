#include"variadic_functions.h"
/**
 * sum_them_all - get the sum of all args
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum = sum + x;
	}
	return (sum);
}
