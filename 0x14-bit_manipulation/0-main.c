#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("FIRST RESULT 1 %u\n", n);
    n = binary_to_uint("101");
    printf("SECOND RESULT OF 101 %u\n", n);
    return (0);
}
