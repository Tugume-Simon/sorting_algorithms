#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * of the integers stored in each node using the insertion sort
 *
 * @list: address of pointer to the head node of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	listint_t *check;
	listint_t *cmp;

	if (list == NULL || *list == NULL)
		exit(EXIT_FAILURE);

	curr = *list;
	while (curr->next != NULL)
	{
		check = curr->next;
		cmp = curr;
		while (cmp != NULL)
		{
			if (cmp->n > check->n)
			{
				check->prev = cmp->prev;
				cmp->next = check->next;
				if (cmp->prev != NULL)
					cmp->prev->next = check;
				else
					*list = check;
				if (check->next != NULL)
					check->next->prev = cmp;

				cmp->prev = check;
				check->next = cmp;
				print_list(*list);

				cmp = check;
			}
			cmp = cmp->prev;
		}
		curr = check;
	}
}
