#include "lists.h"

/**
 *add_nodeint - add a new node at the begining of the lists_t list
*@head: a pointer to the address of head lists_t list
*@n: the integer for the new node to contain
*Return: if the function fails - NUll. otherwise the
*address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
