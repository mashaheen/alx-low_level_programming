#include "lists.h"
/**
  * add_node_end - add new nodes to the list
  * @head: head
  * @str: string
  * Return: pointer
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, len;
	char *dupstr;
	list_t *newhead;
	list_t *last;
	list_t *temp;

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
	newhead->next = NULL;
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newhead;
	
	return (newhead);
}
