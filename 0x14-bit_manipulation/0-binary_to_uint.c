#include"main.h"
/**
 * binary_to_uint- convert to uint
 * @b: argument d
 *
 * Return: resuulti
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			result += _pow_recursion(2, len - 1);
		len--;
		b++;
	}
	return (result);
}

/**
 * _pow_recursion- convert to uint
 * @x: base
 * @y: power
 *
 * Return: resuult
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
