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
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
