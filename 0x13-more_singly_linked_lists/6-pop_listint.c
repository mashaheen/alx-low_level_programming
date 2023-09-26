#include "lists.h"
/**
  * pop_listint - frees a linked list
  * @head: the beginning of the list
  */
int pop_listint(listint_t **head)
{
	int value;

	if (head == NULL)
		return (0);
	value = (*head)->n;
	if ((*head)->next)
	{
		*head = (*head)->next;
	}
	return value;
}
