#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *@h: The list
 *Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{

const listint_t* temp = h;

while(temp != NULL) {
	printf("%d\n",temp->n);
	temp = temp->next;
	}
}

