#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to the 1st node of the linked list to be freed
 * Author: KingVik-Planet
 * Date: 30th April 2023
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
