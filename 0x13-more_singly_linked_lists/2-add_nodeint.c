#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: pointer to a pointer to the head of the list
 * @n: int constant
 * Return: The number of nodes
**/

listint_t *add_nodeint(listint_t **head, const int n);
{

listint_t *new_node;

new_node = malloc(sizeof(new_node));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
new_node->next = *(head);
*head = new_node;

return (new_node);

}

