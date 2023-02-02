#include "lists.h"

/**
 * listint_len - return the number of elements
 * in a linked listint_t list
 * @h: a pointer in the head of a listint_t list
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
