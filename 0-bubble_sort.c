#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: A pointer to the integer array
 * @size: Size of integer array
 */
void bubble_sort(int *array, size_t size)
{
	int temp, swapped = 1;

	if (!array || size < 2)
		return;

	while (swapped)
	{
		swapped = 0;

		for (size_t i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;

				swapped = 1;

				print_array(array, size);
			}
		}
	}
}
