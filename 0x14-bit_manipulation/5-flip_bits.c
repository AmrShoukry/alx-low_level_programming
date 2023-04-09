#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * flip_bits - function
 *
 * @n: header
 * @m: num2
 *
 * Description: print
 *
 * Return: Always (0);
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int length1 = 0, length2 = 0, maxlength;
	unsigned int i = 0, remainder1, remainder2, flips = 0;
	unsigned long int copy1 = n, copy2 = m;
	int *nums1;
	int *nums2;

	while (copy1 != 0)
	{
		copy1 = copy1 >> 1;
		length1++;
	}
	if (n == 0)
		length1 = 1;
	while (copy2 != 0)
	{
		copy2 = copy2 >> 1;
		length2++;
	}
	if (m == 0)
		length2 = 1;
	maxlength = length1 > length2 ? length1 : length2;
	copy1 = n;
	copy2 = m;
	nums1 = malloc(sizeof(int) * maxlength);
	nums2 = malloc(sizeof(int) * maxlength);
	if (nums1 == NULL || nums2 == NULL)
		return (-1);
	for (i = 0; i < maxlength; i++)
	{
		remainder1 = copy1 & 1;
		copy1 = copy1 >> 1;
		*(nums1 + i) = remainder1;
		remainder2 = copy2 & 1;
		copy2 = copy2 >> 1;
		*(nums2 + i) = remainder2;
		if (*(nums1 + i) != *(nums2 + i))
			flips++;
	}
	return (flips);
}
