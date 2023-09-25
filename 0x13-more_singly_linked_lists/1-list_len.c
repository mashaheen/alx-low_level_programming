#include "lists.h"
/**
  * list_len -  list_t list
  * @h: list to print
  *
  * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
