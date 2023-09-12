#include "search_algos.h"

/**
 * jump_list - a function that searches for a value in an array
 *
 * Description: 'Main function is used to use jump_list'
 *
 * @list: a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 *
 * Return: a pointer to the first node where value is located
 */


listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t steps, i;
	int last_min = -1;
	listint_t *current, *pre_current;

	if (list == NULL || size == 0)
		return (NULL);
	if (list->n == value)
		return (list);
	pre_current = list;
	current = list->next;
	steps = sqrt(size);
	while (current != NULL)
	{
		if (current->index % steps == 0)
		{
			printf("Value checked at index [%li] = [%i]\n", current->index, current->n);
			if (value < current->n)
				break;
			pre_current = current;
		}
		if (current->next == NULL)
		{
			last_min = (int) size - 1;
			printf("Value checked at index [%i] = [%i]\n", last_min, current->n);
		}
		current = current->next;
	}
	if (last_min == -1)
		last_min = (int) pre_current->index + steps;
	printf("Value found between indexes [%li] and [%i]\n",
												pre_current->index, last_min);
	current = pre_current;
	for (i = pre_current->index; i <= (size_t) last_min; i++)
	{
		printf("Value checked at index [%li] = [%i]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
