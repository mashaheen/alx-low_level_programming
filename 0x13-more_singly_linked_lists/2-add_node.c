#include "lists.h"
/**
  * add_node - add new nodes to the list
  * @head: head
  * @str: string
  * Return: pointer
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *dupstr;
	list_t *newhead;

	if (str == NULL || head == NULL)
		return (NULL);
	len = strlen(str);
	dupstr = malloc(len + 1);
	if (dupstr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dupstr[i] = str[i];
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		free(dupstr);
		return (NULL);
	}
	newhead->str = dupstr;
	newhead->len = len;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
