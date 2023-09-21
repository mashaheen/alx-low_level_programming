#include "lists.h"
/**
  * print_list -  list_t list
  * @h: list to print
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		} else
		{
			printf("[0] nil");
		}
		h = h->next;
	}
	return (counter);
}
