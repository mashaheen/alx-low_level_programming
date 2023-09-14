#include "variadic_functions.h"
/**
  * print_strings - print strings
  * @separator: character seperator
  * @n: nmber of items
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *words;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(args, char *);
		(words != NULL) ? printf("%s", words) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
