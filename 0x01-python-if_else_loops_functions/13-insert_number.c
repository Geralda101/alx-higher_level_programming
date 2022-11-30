#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - function to insert node in a sorted linked list
 * @head: head node to list
 * @number: number to insert
 * Return: address of new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode, *temp, *holder;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = number;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	holder = NULL;
	while (temp->next != NULL)
	{
		if (temp->n > number)
			break;
		holder = temp;
		temp = temp->next;
	}
	if (temp->n < number)
		temp->next = newnode;
	else if (temp->n > number)
	{
		if (holder == NULL)
		{
			newnode->next = temp;
			*head = newnode;
			return (newnode);
		}
		newnode->next = temp;
		holder->next = newnode;
	}
	return (*head);
}
