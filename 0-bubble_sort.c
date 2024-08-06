#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: A pointer to the integer array
 * @size: Size of integer array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < (size - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}

			print_array(array, size);
		}
	}
}
