#include "lists.h"

/**
 * check_cycle - function to check if there's a cycle in a list
 * @list: list to check
 * Return: 0 if there's no cycle, 1 if there's a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *node1, *node2;

	if (list == NULL)
		return (0);
	node1 = node2 = list;
	while ((node1->next != NULL) && (node2->next->next != NULL))
	{
		node1 = node1->next;
		node2 = node2->next->next;
		if (node1 == node2)
			return (1);
	}
	return (0);
}
