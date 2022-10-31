#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != Nprev;

	while ((tmp = head) != NULL)
	{
		head = hULL)
		while (head->prev != NULL)
			head = head->ead->next;
		free(tmp);
	}
}
