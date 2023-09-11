#include "search_algos.h"

/**
 * binary_search_a - a function to get the desired element's index
 *
 * Description: 'Main function is used to get index'
 *
 * @array: a pointer to the first element of the array to search in
 * @start: the starting index
 * @end: the ending index
 * @value: is the value to search for
 * @temp: earlist index of the value
 * @m: mode of the search (0: left  1: right)
 *
 * Return: the first index where value is located
 */


int binary_search_a(int *array, int start, int end, int value, int temp, int m)
{
	int mid;
	int i;

	if ((start == end && m == 0) || start > end)
		return (temp);

	printf("Searching in array: %i", array[start]);
	for (i = start + 1; i <= end; i++)
		printf(", %i", array[i]);
	printf("\n");

	mid = (start + end) / 2;

	if (value == array[mid] && (mid < temp || temp == -1))
		temp = mid;

	if (value > array[mid])
		return (binary_search_a(array, mid + 1, end, value, temp, 1));
	return (binary_search_a(array, start, mid, value, temp, 0));

}


/**
 * advanced_binary - a function that searches for a value in an array
 *
 * Description: 'Main function is used to use advanced_binary'
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search_a(array, 0, (int) size - 1, value, -1, 0));
}
