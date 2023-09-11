#include "search_algos.h"

/**
 * linear_skip - a function that searches for a value in an array
 *
 * Description: 'Main function is used to use advanced_binary'
 *
 * @list: a pointer to the head of the list to search in
 * @value: is the value to search for
 *
 * Return: a pointer to the first node where value is located
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *pre;
	size_t i;
	int last = -1;

	if (list == NULL)
		return (NULL);
	if (list->n == value)
		return (list);
	pre = list;
	current = list->express;
	while (current != NULL)
	{
		printf("Value checked at index [%li] = [%i]\n", current->index, current->n);
		if (value <= current->n)
			break;
		pre = current;
		if (current->express == NULL)
		{
			pre = current;
			while (current != NULL)
			{
				last = (int) current->index;
				current = current->next;
			}
			break;
		}
		current = current->express;
	}
	if (last == -1)
		last = (int) current->index;
	printf("Value found between indexes [%li] and [%i]\n", pre->index, last);
	current = pre;
	for (i = pre->index; i <= (size_t) last; i++)
	{
		printf("Value checked at index [%li] = [%i]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
