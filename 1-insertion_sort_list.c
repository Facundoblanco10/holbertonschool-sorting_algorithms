#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 *
 * @list: doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *aft, *bef;

	if (list == NULL)
		return;
	node = *list;
	while (node && node->next)
	{
		aft = node->next;
		bef = node->prev;
		if (node->n > aft->n && node)
		{
			if (aft->next)
				aft->next->prev = node;
			node->next = aft->next;
			node->prev = aft;
			aft->next = node;
			aft->prev = bef;
			if (bef)
			{
				bef->next = aft;
				node = bef;
			}
			else if (node->next && node->n > node->next->n)
				node = node;
			else
				node = node->next;
			if ((*list)->prev)
				*list = (*list)->prev;
			print_list(*list);
		}
		else
			node = node->next;
	}
}
