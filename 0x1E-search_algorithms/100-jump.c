#include "search_algos.h"

/**
 * get_index - a function to get the desired element's index
 *
 * Description: 'Main function is used to get index'
 *
 * @array: a pointer to the first element of the array to search in
 * @size: array size
 * @start: the starting index
 * @steps: number of additions in each iteration
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */


int get_index(int *array, int size, int start, int steps, int value)
{
	int i;
	int last;

	if (start >= size)
		return (-1);

	printf("Value checked array[%i] = [%i]\n", start, array[start]);

	if (array[start] == value)
		return (start);

	if ((start + steps < size && value <= array[start + steps]) ||
		(start + steps >= size))
	{
		last = start + steps;
		if (start + steps >= size)
			last = size - 1;
		printf("Value found between indexes [%i] and [%i]\n", start, start + steps);
		for (i = start; i <= last; i++)
		{
			printf("Value checked array[%i] = [%i]\n", i, array[i]);

			if (array[i] == value)
				return (i);
		}
	}

	return (get_index(array, size, start + steps, steps, value));
}

/**
 * jump_search - a function that searches for a value in an array of integers
 *
 * Description: 'Main function is used to use jump search'
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	return (get_index(array, (int) size, 0, (int) sqrt(size), value));
}
