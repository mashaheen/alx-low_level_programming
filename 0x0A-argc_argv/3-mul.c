#include<stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguemnts
 * @argv: array of pointers
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
