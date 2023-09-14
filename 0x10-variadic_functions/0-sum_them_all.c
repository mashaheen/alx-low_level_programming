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
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
