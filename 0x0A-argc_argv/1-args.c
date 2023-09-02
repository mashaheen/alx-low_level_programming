#include<stdio.h>
/**
 * main - entry point
 * @argc: number of arguemnts
 * @argv: array of pointers
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
		argv[0] = 0;
	}
	return (0);
}
