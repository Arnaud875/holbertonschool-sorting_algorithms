#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: A double pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *temp;

	if (!list || !(*list))
		return;

	current = *list;
	while (current)
	{
		key = current;
		current = current->next;

		while (key->prev && key->n < key->prev->n)
		{
			temp = key->prev;
			if (temp->prev)
				temp->prev->next = key;

			key->prev = temp->prev;

			temp->next = key->next;
			temp->prev = key;

			if (key->next)
				key->next->prev = temp;
			key->next = temp;

			if (!key->prev)
				*list = key;

			print_list(*list);
		}
	}
}
