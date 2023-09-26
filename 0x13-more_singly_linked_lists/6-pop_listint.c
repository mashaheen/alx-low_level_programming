#include "lists.h"
/**
  * pop_listint - frees a linked list
  * @head: the beginning of the list
  * Return : value of first head
  */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	value = (*head)->n;
	tmp = *head;
	if ((*head)->next)
	{
		*head = (*head)->next;
		free(tmp);
	} else
	{
		free(*head);
	}
	return (value);
}
