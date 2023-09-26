#include "lists.h"
/**
  * add_nodeint - add new nodes to the list
  * @head: head
  * @n: int
  * Return: pointer
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	if (head == NULL)
		return (NULL);
	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
	{
		return (NULL);
	}
	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
