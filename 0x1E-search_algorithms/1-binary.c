#include "search_algos.h"

/**
 * get_index - a function to get the desired element's index
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


int get_index(int *array, int start, int end, int value)
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
		return (get_index(array, mid + 1, end, value));
	return (get_index(array, start, mid - 1, value));

}

/**
 * binary_search - a function that searches for a value in an array of integers
 *
 * Description: 'Main function is used to use binary search'
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	return (get_index(array, 0, (int) size - 1, value));
}
