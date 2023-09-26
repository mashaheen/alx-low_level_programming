#include "lists.h"
/**
  * pop_listint - frees a linked list
  * @head: the beginning of the list
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL)
		return (0);
	temp = *head;
	value = *head->n;
	if (*head->next)
	{
		*head = *head->next;
	}
	temp = NULL;
	return value;
}
