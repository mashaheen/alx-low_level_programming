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
	if (argc > 0)
	{
		int i;
		int result = 0;

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
	printf("0\n");
	return (0);
}
