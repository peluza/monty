#include "monty.h"

/**
 *delete_dnodeint_at_index - delete at vlaue the stack_t
 *@head: the chars of the lists
 *@index: position of the nodes
 *Return: the value at delete
 */
int *delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *tmp = *head;
	unsigned int i = 0, len = 0;
	
	if (*head == 0)
	{
        fprintf(stderr, "L%d: can't pop an empty stack", index);
        exit(EXIT_FAILURE);
    }
	if ((*head)->next == 0 && index == 0)
	{
		free(*head);
		*head = 0;
		return (-1);
	}
	len = dlistint_len(*head);
	len -= 1;
	if (index > len)
		return (-1);
	if (index == 0)
	{
		tmp->next->prev = 0;
		*head = tmp->next;
		free(tmp);
		tmp = 0;
		return (1);
	}
	for (i = 0; i != index; i++)
		tmp = tmp->next;
	if (index == len)
	{
		tmp->prev->next = 0;
		free(tmp);
		tmp = 0;
		return (1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	tmp->prev = 0;
	tmp->next = 0;
	free(tmp);
	tmp = 0;
	return (1);
}
/**
 *dlistint_len - prints all numbers the elemts of the dlistsint_s
 *@h: the lists for the estruct
 *Return:  the name of the nodos
 */

int dlistint_len(const stack_t *h)
{
	unsigned int nodes = 0;

	if (h == 0)
		return (0);
	while (h != 0)
	{
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}