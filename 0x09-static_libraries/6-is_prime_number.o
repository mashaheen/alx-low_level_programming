#include <stdio.h>
/**
  * primeHelper - checks
  * @n: argument descp
  * @base: argument descp
  * Return: primtHelper
  */
int primeHelper(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (primeHelper(n + 1, base));
	return (1);
}
/**
  * is_prime_number - checks
  * @n: argument descp
  * Return: is prime number
  */
int is_prime_number(int n)
{
	return (primeHelper(2, n));
}
