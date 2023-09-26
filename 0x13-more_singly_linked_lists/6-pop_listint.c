#include "lists.h"
/**
  * pop_listint - frees a linked list
  * @head: the beginning of the list
  * Return: value of first head
  */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = *head;
	if (*head)
	{
		*head = (*head)->next;
		value = (*head)->n;
		free(tmp);
	} else
	{
		value = 0;
		free(*head);
	}
	return (value);
}
