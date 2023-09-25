#include "lists.h"
/**
  * print_listint - print linked list of int 
  * @h: list to print
  *
  * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
