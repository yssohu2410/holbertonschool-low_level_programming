#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) of a linked list.
 * @head: pointer named head and this first node
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	 int c = 0, num = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		num = temp->n;
		temp = temp->next;
		c = c + num;
	}
	return (c);
}
