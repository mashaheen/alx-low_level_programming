#include "lists.h"
/**
  * add_nodeint_end - add new nodes to the list
  * @head: head
  * @n: int
  * Return: pointer
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newhead;
	listint_t *temp;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
	{
		return (NULL);
	}
	newhead->n = n;
	newhead->next = NULL;
	if (*head == NULL)
	{
		*head = newhead;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newhead;
	return (newhead);
}
