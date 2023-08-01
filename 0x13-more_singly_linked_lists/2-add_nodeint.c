#include "lists.h"

/**
 * add_nodeint - funtion to adds a new node at the beginning of a linked list
 * @head: points to the first node in the list
 * @n: info to insert in that new node
 *
 * Return: always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
