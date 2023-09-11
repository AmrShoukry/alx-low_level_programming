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
	int pos;

	pos = start + (((double)(end - start) / (array[end] - array[start]))
	* (value - array[start]));

	if (pos > end)
	{
		printf("Value checked array[%i] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%i] = [%i]\n", pos, array[pos]);

	if (value == array[pos])
		return (pos);

	if (value > array[pos])
		return (get_index(array, pos + 1, end, value));
	return (get_index(array, start, pos - 1, value));
}

/**
 * interpolation_search - a function that searches for a value in an array
 *
 * Description: 'Main function is used to use interpolation_search'
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	return (get_index(array, 0, (int) size - 1, value));
}
