#include "search_algos.h"

/**
 * binary_search_exponential - a function to get the desired element's index
 *
 * Description: 'Main function is used to get index'
 *
 * @array: a pointer to the first element of the array to search in
 * @start: the starting index
 * @end: the ending index
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */


int binary_search_exponential(int *array, int start, int end, int value)
{
	int mid;
	int i;

	if (start > end)
		return (-1);

	printf("Searching in array: %i", array[start]);
	for (i = start + 1; i <= end; i++)
		printf(", %i", array[i]);
	printf("\n");

	mid = (start + end) / 2;

	if (value == array[mid])
		return (mid);

	if (value > array[mid])
		return (binary_search_exponential(array, mid + 1, end, value));
	return (binary_search_exponential(array, start, mid - 1, value));

}


/**
 * exponential_search - a function that searches for a value in an array
 *
 * Description: 'Main function is used to use exponential_search'
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	int i = 1;
	int last_min;

	if (array[0] == value)
		return (0);

	while (i < (int) size && array[i] < value)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		i = i * 2;
	}

	last_min = (int) size - 1;
	if (i < last_min)
		last_min = i;

	i = i / 2;

	printf("Value found between indexes [%i] and [%i]\n", i, last_min);

	return (binary_search_exponential(array, i, last_min, value));
}
