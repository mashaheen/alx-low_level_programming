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
	if (argc != 3)
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}
	printf("Error\n");
	return (1);
}
