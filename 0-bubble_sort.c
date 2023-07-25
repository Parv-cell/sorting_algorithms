#include "sort.h"

/**
 * bubble_sort - function to sorts array of integers in ascending format
 * with the Bubble sort algorithm
 *
 * Description:
 * @array: the array integers
 * @size: the size of @array
 *
 * Return: 0
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	/* iterate through the entire array */
	for (i = 0; i < size - 1; i++)
	{
		/* swapping */
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j]; /* stores temp value for the swap */
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size); /* prints swap array */
			}
		}
	}
}
